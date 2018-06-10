#include<bits/stdc++.h>
using namespace std;
#define maxi 1000000000

  int o,p,c=0,rs=0;

    long long a[o],b[p];

int main ()
{
    cin>>o>>p;

    for(int j=0; j<o; j++)
    {
        cin>>a[j];
    }
    for(int j=0; j<p; j++)
    {
        cin>>b[j];
    }
    if(c<=p)
    {
        for(int j=0; j<o; j++)
        {
            if(a[j]<=b[c])
            {
             rs++;
            }

        }
        cout<<rs;
       cout<<endl;

        c++;
    }

}
