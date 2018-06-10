
#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,a,b,res=0;


    cin>>n>>a>>b;
    long long p[n];

    b=b*2;
    for(int i=0; i<n; i++)
    {
        cin>>p[i];

        if(p[i]==1&&a!=0)
        {
            a=a-p[i];
        }
        else if(p[i]==1&&a==0&&b!=0)
        {
            b=b-p[i];
        }
        else if(p[i]==1&&a==0&&b==0)
        {
            res=res+p[i];
        }
        else if(p[i]==2&&b>1)
        {
            b=b-p[i];
        }
        else if(p[i]==2&&b==1)
        {
            res=res+p[i];
        }
        else if(p[i]==2&&b==0)
        {
            res=res+p[i];
        }

    }



        cout<<res<<endl;






}
