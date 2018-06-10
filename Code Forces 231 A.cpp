#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,c=0,o=0,r=0;
    cin>>n;


    while (n--)
    {
       for(int i=0 ;i<3;i++)
       {
        cin>>o;

        if(o==1)
        {
          c++;


        }


       }

         if(2<=c)
         {

             r++;
         }

 c=0;
    }

    cout<<r<<endl;




}
