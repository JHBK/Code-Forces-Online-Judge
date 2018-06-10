#include<bits/stdc++.h>


using namespace std ;


int main()
{

    long n ,c=0;

    cin>>n;
    long l[n];

    for(int i = 0 ; i<n ;i++ )
    {

        cin >> l[i];

    }

    sort(l,l+n);

    for(int i = 0 ; i<n ;i++ )
    {

        if(l[i]>0&&l[i]!=l[i-1])
        {

            c++;
        }

    }


    cout<<c<<endl;




}
