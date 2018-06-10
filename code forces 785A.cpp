#include<iostream>
 using namespace std;


     int main ()
     {
         long t,r=0;
         string s;
         cin>>t;
         while (t!=0)

         {
             cin>>s;
             if(s=="Tetrahedron")
             {
                r+= 4;
             }
             else if(s=="Cube")
             {
                r+= 6;
             }
             else if(s=="Octahedron")
             {
                r+= 8;
             }
            else  if(s=="Dodecahedron")
             {
                r+=12;
             }
             else  if(s=="Icosahedron")
             {
                r+=20;
             }

             t--;
         }
         cout<<r<<endl;

     }
