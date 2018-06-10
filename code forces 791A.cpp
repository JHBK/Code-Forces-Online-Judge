#include<bits/stdc++.h>
using namespace std;

 int main()
 {
     int l,b,res=0;
     cin>>l>>b;
     while(1)
     {
         if (l>b)
            break;

         l=l*3;
         b=b*2;
         res++;
     }
     cout<<res<<endl;
     }





