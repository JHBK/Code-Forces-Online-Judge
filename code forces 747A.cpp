#include<stdio.h>
#include<string.h>
#include<math.h>
using namespace std;
int main()
{
    int n;
    while(~scanf("%d",&n))
    {
        int ans1,ans2;
        int minn=9999999;
        for(int i=1;i<=n;i++)
        {
            if(n%i==0)
            {
                int j=n/i;
                if(j>=i)
                {
                    if(j-i<minn)
                    {
                        minn=j-i;
                        ans1=i,ans2=j;
                    }
                }
            }
        }
        printf("%d %d\n",ans1,ans2);
    }
}
