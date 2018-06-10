#include<iostream>
using namespace std;
int main ()

{
    long long a;
    cin>>a;
    if (a==0)
    {
        cout<<1<<endl;

    }
    else if (a%4==1)
    {
        cout<<8<<endl;
    }
    else if (a%4==2)
    {
        cout<<4<<endl;
    }
    else if (a%4==3)
    {
        cout<<2<<endl;
    }
    else
    {
        cout<<6<<endl;
    }


}
