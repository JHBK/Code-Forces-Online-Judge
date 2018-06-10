
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int n,m,k,a[200],x;
int main()
{
    scanf("%d%d%d",&n,&m,&k);
    for(int i=1;i<=k;i++)
    {
        scanf("%d",&a[i]);
    }
    int ans=0;
    while(n--)
    {
        for(int i=1;i<=m;i++)
        {
            scanf("%d",&x);
            for(int j=1;j<=k;j++)
            {
                if(a[j]==x)
                {
                    ans+=j;
                    for(int o=j;o>1;o--)
                    {
                        a[o]=a[o-1];
                    }
                    a[1]=x;
                    break;
                }
            }
        }
    }
    printf("%d\n",ans);
    return 0;
}
