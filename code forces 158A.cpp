    #include <iostream>
    #include <math.h>
    using namespace std;
    int main()
    {
        int a[100],n,k,ans,i;
        while(cin>>n>>k)
        {
            ans=0;
            for(i=0;i<n;i++)
            {
                cin>>a[i];
            }
            for(i=0;i<n;i++)
            {
                if(a[i]>=a[k-1]&&a[i]!=0)
                    ans++;
            }
            cout<<ans<<endl;
        }
        return 0;
    }
