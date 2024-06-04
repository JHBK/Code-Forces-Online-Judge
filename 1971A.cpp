// Online C++ compiler to run C++ program online
#include<bits/stdc++.h>
#include <iostream>
#include <algorithm>
 
using namespace std;

int main() {
   int t=0, x=0,y=0, mi =0 ,ma=0 ;
   
   cin>>t;
   
   while(t>0){
       cin>>x>>y;

       cout<<min(x,y)<<" "<<max(x,y)<<endl;
       
       t--;
   }

    return 0;
}
