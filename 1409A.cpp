#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
 long a ,b,r=0,test;
 double t;
    cin>>test;
    
    for (int i=0;i<test;i++){
    cin>>a>>b;
    if (a<b){
        
        t=b-a;
        t=t/10;
        r=ceil(t);
    }
    else if (a>b){
        t=a-b;
        t=t/10;
        r=ceil(t);
        }
        else if (a==b){
            r=0;}
     cout<<r<<endl;
    }
    
}