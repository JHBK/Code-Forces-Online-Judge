
#include<bits/stdc++.h>
using namespace std;
 int main ()
 {
     long long int b,r,a,n,k;

     cin>>n>>k;

     a=n%k;
     a=n-a;
     b=a/k;
     b=b+1;
     r=k*b;
     cout<<r<<endl;




 }

