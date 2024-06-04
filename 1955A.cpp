// Online C++ compiler to run C++ program online
#include<bits/stdc++.h>
#include <iostream>
#include <algorithm>
 
using namespace std;
 
int main() {
    
   float t=0, n=0,a=0, b = 0, bh=0,mi=0 ,output=0;
   
   cin>>t;
   
   while(t>0){
       cin>>n>>a>>b;
       bh=b/2;
       
       if ( remainder(n, 2) == 0){
           mi=min(a,bh);
           output=n*mi;
           
       }else{
           n=n-1;
           mi=min(a,bh);
           output=n*mi+a;
       }
       
 
       cout<<output<<endl;
       
       t--;
   }
 
    return 0;
}
