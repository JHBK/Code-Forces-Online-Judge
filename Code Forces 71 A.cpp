#include<bits/stdc++.h>

using namespace std;

int main ()
{
    int n;
    cin>>n;
    string s;
    while(n--)
    {
        cin>>s;
        if(s.length()<11)
        {

            cout<<s<<endl;
        }
        else{

            cout<<s.at(0)<<s.length()-2<<s.at(s.length()-1)<<endl;


        }



    }



}
