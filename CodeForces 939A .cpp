#include<bits/stdc++.h>


using namespace std ;


int main ()
{
    long n ;

    cin>>n;
    long l[n+1];

    for(int i = 1 ; i<=n ;i++ )
    {

        cin >> l[i];

    }
    for(int i = 1 ; i<=n ;i++ )
    {

        if(l[l[l[i]]]==i)
        {

            cout<<"YES"<<endl;
            return 0;
        }

    }

    cout<<"NO"<<endl;




}
