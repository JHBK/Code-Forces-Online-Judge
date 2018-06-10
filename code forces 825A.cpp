#include<bits/stdc++.h>


using namespace std;

int main()
{


    int n,z=0,o=0;
    cin>>n;
   string a,b;
   cin>>a;


    for (int i=1;i<n;i++)
    {


        if(a.at(i)==1)
        {
            o++;
            if(z!=0)
            {
                b.push_back(0);
                z=0;
            }
        }
        if(a.at(i)==0)
        {
            z++;


           if(o!=0)
            { b.push_back(o);
            o=0;
            }
        }


    }
    cout<<b<<endl;



}
