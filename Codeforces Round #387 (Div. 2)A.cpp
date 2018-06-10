#include<bits/stdc++.h>
using namespace std;
int main()
{
  long int n,a,b;
  cin>>n;
  if(n==1||n==3||n==5||n==7)
  {
      cout<< 1 << " " <<n ;
  }

 else if(n/2!=0){
        a=(int)sqrt(n);

        b=n/a;
  cout <<a<<" "<<b;
}

}
