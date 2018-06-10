#include<bits/stdc++.h>

using namespace std ;


int main()
{


    int n ,a[210];

    cin>>n;



	for( int i = 0 ; i < n*2 ; i ++ ) {
		cin>>a[i];
	}

	sort(a,a+n*2);

    if(a[n-1]==a[n])
    {

        cout<<"NO"<<endl;

    }
    else
    {

         cout<<"YES"<<endl;
    }

}
