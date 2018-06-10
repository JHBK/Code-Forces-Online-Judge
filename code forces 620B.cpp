#include<bits/stdc++.h>
using namespace std;
 int main ()
 {

   const int ar[10] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};

   int a,b,c,d,r1=0,r2=0;
    cin>>a>>b;
    for(int i=a;i<=b;i++)
    {
        r1=i;
            while(r1){
                r2+=ar[r1%10];
                if(r1<10)break;
                r1/=10;
            }
    }

    cout<<r2<<endl;


 }


