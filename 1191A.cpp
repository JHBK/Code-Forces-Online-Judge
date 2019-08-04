#include<bits/stdc++.h>

using namespace std;

int main()
{

    long long int x,r1,r2;
    cin>>x;

    r1=x%4;

    if(r1==1)
    {

        cout<<0<<" A"<<endl;
    }

    else if(r1==3)
    {
        r1=(x+1)%4;
        if(r1==1)
        {

            cout<<1<<" A"<<endl;
            exit(0);

        }
        else
            r1=3;

        r1=(x+2)%4;
        if(r1==1)
        {

            cout<<2<<" A"<<endl;
            exit(0);
        }

        else
            cout<<0<<" B"<<endl;
    }

    else if(r1==2)
    {
        r1=(x+1)%4;

        if(r1==1)
        {

            cout<<1<<" A"<<endl;
            exit(0);
        }
        else if (r1==3)
        {
            cout<<1<<" B"<<endl;
            exit(0);
        }

        else
            r1=2;

        r1=(x+2)%4;
        if(r1==1)
        {

            cout<<2<<" A"<<endl;
            exit(0);
        }
        else if (r1==3)
        {
            cout<<2<<" B"<<endl;
            exit(0);
        }
        else
            cout<<0<<" C"<<endl;

    }
    else if (r1==0)
    {
        r1=(x+1)%4;
        if(r1==1)
        {

            cout<<1<<" A"<<endl;
            exit(0);
        }
        else if (r1==3)
        {
            cout<<1<<" B"<<endl;
            exit(0);
        }
        else if (r1==2)
        {
            cout<<1<<" C"<<endl;
            exit(0);
        }

        else
            r1=0;

        r1=(x+2)%4;
        if(r1==1)
        {

            cout<<2<<" A"<<endl;
            exit(0);
        }
        else if (r1==3)
        {
            cout<<2<<" B"<<endl;
            exit(0);
        }
        else if (r1==2)
        {
            cout<<2<<" C"<<endl;
            exit(0);
        }
        else
            cout<<0<<" D"<<endl;

    }





}
