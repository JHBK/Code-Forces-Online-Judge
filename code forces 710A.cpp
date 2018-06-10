#include<bits/stdc++.h>
using namespace std;
 int main ()
 {

     char a;
     int b;
     cin>>a>>b;
     if(a=='a'||b==8||a=='h'||b==1){
     if (a=='a'&&b==1||a=='a'&&b==8||a=='h'&&b==1||a=='h'&&b==8 )
     {
         cout<<"3"<<endl;
     }
     else
     {
         cout<<"5"<<endl;
     }
     }


     else
     {
         cout<<"8"<<endl;
     }


 }
