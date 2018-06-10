#include<bits/stdc++.h>


using namespace std ;


int main()
{

    long long int n , k ;


    cin>>n>>k;

    long long int a[k],r[k],m[k],res=0,temp=0;

    for(int i = 0 ; i<k ; i++ )
    {

        cin >> a[i];

        r[i]==0;
        m[i]==0;

    }

    if(n!=0){

    for(int i = 0 ; i<k ;i++ )
    {

        r[i]=n/a[i];

        m[i]=r[i]*a[i];


    }


    res=m[0];
    for(int i = 1 ; i<k ;i++ )
    {
        if(m[i]>res)

        {
            res=m[i];
            temp=i;
        }

    }

    cout<<temp+1<<" "<<r[temp]<<endl;

    }
    else{

        cout<<1<<" "<<0<<endl;


    }



}
