#include<bits/stdc++.h>

using namespace std;

int main()
{

    string s;
    cin>>s;

    int z=0,o=0,r=0;

    for(int i=0;i<s.length();i++)
    {


        if(s.at(i)=='0')
        {
            o=0;
            z++;
            if(z>6)
        {
         break;
        }
        }
        else if(s.at(i)=='1')
        {

            z=0;
            o++;
               if(o>6)
        {
         break;
        }
        }


    }

    if(o>6||z>6)
    {
        cout<<"YES"<<endl;
    }
    else
    {

        cout<<"NO"<<endl;
    }



}
