#include<bits/stdc++.h>

using namespace std ;

int main()
{
    string s;

    cin>>s;
  for(int i=0;i<s.length();i++)
    {

        s.at(i)=tolower(s.at(i));
    }

    for(int i=0;i<s.length();i++)
    {
        if(s.at(i)=='a'||s.at(i)=='o'||s.at(i)=='y'||s.at(i)=='e'||s.at(i)=='u'||s.at(i)=='i')
        {
            continue;
        }
        else
        {

            cout<<"."<<s.at(i);
        }


    }
    cout<<endl;




}
