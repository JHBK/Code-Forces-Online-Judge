#include<bits/stdc++.h>
using namespace std;

int main()
{
long long int l1,r1,l2,r2,n,re1,re2;



scanf("%lld ",&n);
for(int i=0;i<n;i++){

scanf("%lld %lld %lld %lld",&l1,&r1,&l2,&r2);

re1=l1;
re2=l2;
if(re1==re2){
    re2=re2+1;

}
cout<<re1<<" "<<re2<<endl;

}



}
