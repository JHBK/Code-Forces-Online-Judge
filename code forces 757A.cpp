#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;

    cin>>s;
    int i,a=0,b=0,c=0,d=0,e=0,f=0,g=0,r;
        for(i=0; i<s.size(); i++)
        {
            if(s.at(i)=='B')
            {
                a++;
            }
            else if(s.at(i)=='u')
                {
                b++;
                }
            else if(s.at(i)=='l')
                {
                c++;
                }
            else if(s.at(i)=='b')
                {
                d++;
                }
            else if(s.at(i)=='a')
                {
                e++;
                }
            else if(s.at(i)=='s')
                {
                f++;
                }
            else if(s.at(i)=='r')
                {
                g++;
                }
        }
   for(i=0; i<=a; i++)
    {
        if(b>=2*i && c>=i && d>=i && e>=2*i && f>=i && g>=i)
        {
           r=i;
        }
    }
    if(a!=0)
    {
        cout<<r<<endl;
    }
    else
    {
        cout<<"0"<<endl;
    }

}
