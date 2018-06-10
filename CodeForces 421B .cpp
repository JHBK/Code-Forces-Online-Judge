#include<bits/stdc++.h>

using namespace std;

int main ()
{

    string s;

    int f=0,l=0,r=0;

    char ch[]= {'A','H','I','M','O','T','U','V','W','X','Y'};


    cin>>s;

    l = s.size();


    for(int i=0; i < l ; i++)
    {
        if(s[i] != s[l-i-1])
        {
            f = 1;

            break;
        }
    }


    if(f==1)
    {

        cout<<"NO"<<endl;
        return 0;

    }


    for (int i = 0 ;  i<l; i++   )

    {
        if(r==1)
        {
            break;
        }
        for(int j=0; j <11; j++)
        {

            //cout<<s.at(i)<<" "<<ch[j]<<endl;
            if(s.at(i)==ch[j])
            {
                r=0;
                break;
            }
            else
            {
                //cout<<"Z"<<endl;
                r=1;
                continue;

            }

        }



    }




    if(r==1)
    {
        cout<<"NO"<<endl;

    }
    else
    {
        cout<<"YES"<<endl;
    }

}
