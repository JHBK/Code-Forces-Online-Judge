#include<bits/stdc++.h>

using namespace std;

int main ()
{

    long int n,c=0;


     scanf("%ld",&n);

    while(n>=0)
    {
        if(n==0||n<0)
        {

            break;
        }
        n=n-5;

        c++;


    }


    cout<<c<<endl;

}
