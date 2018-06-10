
#include<bits/stdc++.h>

using namespace std ;
int main()
{

    int n,k,d=-1,t;
    cin>>n>>k;
    int c[n];

    for(int i =0 ; i<n; i++)
    {
        cin>>c[i];

    }

    for(int i =0 ; i<n; i++)
    {

        if(c[i]<=8)
        {
            if(k>0)
            {
                k=k-c[i];
                d++;
            }
        }

            if(c[i]>8)
            {
                if(k>0)
            {
                t=c[i]-8;
                k=k-8;
                c[i+1]=c[i+1]+t;
                d++;
            }

            }


    }
    if(d==-1&&k!=0)
    {
        cout<<"-1"<<endl;
    }
    else if(d!=-1&&k>0)
    {
         cout<<"-1"<<endl;

    }
    else{
        cout<<d+1<<endl;
    }
}
