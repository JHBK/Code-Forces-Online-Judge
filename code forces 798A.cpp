#include<bits/stdc++.h>
using namespace std ;
          string a;

 bool ispalian(int st,int en)
 {
     if(st==en)return true;
     if(st>en)return true;
     if(a[st]!=a[en])return false;
     bool temp =ispalian(st+1,en-1);
     return temp;
 }


int main()
{


   cin>>a;
        int st=0,en=a.size()-1;
       if( ispalian(st,en)==false)
       {
           cout<<"no"<<endl;

       }
       else{

        cout<<"yes"<<endl;
       }

}




