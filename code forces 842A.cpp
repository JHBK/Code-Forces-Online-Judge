
#include<bits/stdc++.h>

using namespace std ;


int main()
{

 long double  l, r, x, y, k,p=0,a=0,b=0;

      cin>>l>> r>> x>> y>> k;

      p=(r-l+1)*(y-x+1);

    for(int i =l;i<=r;i++)
    {
        a=a+i;
    }

    cout<<a<<endl;

    for(int i =x;i<=y;i++)
    {
        b=b+i;
    }

    a=a*b;


    p=a/p;

cout<<p<<endl;

    p=(a*b)/p;

     if(p!=k)
     {
         cout<<"NO"<<endl;

     }
     else{
            cout<<"YES"<<endl;

     }




}
