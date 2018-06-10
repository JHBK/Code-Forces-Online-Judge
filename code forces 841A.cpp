#include<bits/stdc++.h>

using namespace std ;


int main()
{
    int n , k,c=0;
    scanf("%d %d",&n,&k);
     getchar();

     c=k-1;

     //cout<<c<<endl;

   string s;

   //scanf("%s",&s);
        cin>>s;

    sort(s.begin(), s.end());

    //cout<<s<<endl;

    for(int i =1; i<n;i++)
    {
        if(s[i-1]==s[i])
        {
            c--;

            //cout<<c<<endl;
            if(c<0)
            {

                break;
            }
        }
        else{

            c=k-1;
        }

    }


    if(c<0)
    {
        cout<<"NO"<<endl;
    }
    else{

        cout<<"YES"<<endl;
    }





}
