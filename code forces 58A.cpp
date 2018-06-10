#include<iostream>
#include<string>
using namespace std ;
 int main ()
 {
     string w="hello";
     string i;
     cin>>i;
     int l=i.length();
     int b=0,r=0;
     for(int a=0;a<l;a++)
     {
         if(i[a]==w[b])
         {
             b++;
            r++;
         }
     }
     if (r==5)
     {
         cout<<"YES"<<endl;
     }
    else
    {
        cout<<"NO"<<endl;
     }





 }



