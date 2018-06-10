#include<bits/stdc++.h>

using namespace std ;


int main()
{

    long long int  nnn,c;

    cin>>nnn ;

    long long int aaaa[nnn];

    for(int i=0; i<nnn; i++)
    {

        scanf("%lld",&aaaa[i]);
        c=c+aaaa[i];
    }

    if(c%2!=0)
    {

        cout<<"First"<<endl;

    }
    else
    {


        for(int i=0; i<nnn; i++)
        {

            if(aaaa[i]%2!=0)
            {
                cout<<"First"<<endl;

               break;
            }
            else if (i==nnn-1)

            {
               cout<<"Second"<<endl;

               break;
            }


        }


    }



}
