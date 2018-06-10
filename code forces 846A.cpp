#include<bits/stdc++.h>

using namespace std;


int main()
{

    int k,r=0,t=0;
    cin>>k;

    int o[k];

    for(int i=0 ; i<k; i++)
    {
        cin>>o[i];

        if(o[i]==1)
        {
            if(t==0)
              r=1;
              else
                cout<<i<<endl;break;

        }
        else
        {

            if(r!=0)
              t++;
        }

    }

    if(k==1)
    {
        cout<<1<<endl;
    }
    else
    {
        cout<<max(r,t)<<endl;
    }

}
