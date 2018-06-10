#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,t,k,d;

    cin>>n>>t>>k>>d;

    if(t==d)
    {
        cout<<"NO"<<endl;
    }

   else if(n<k)
   {
       cout<<"NO"<<endl;

   }
   else if((n/k)*t>(d+t))
   {
        cout<<"NO"<<endl;
   }
   else
   {
       cout<<"YES"<<endl;
   }



}
