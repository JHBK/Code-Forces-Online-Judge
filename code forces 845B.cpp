#include<bits/stdc++.h>

using namespace std ;

//hoinai
int main()
{

    int a,c=0,c1=0,c2=0,c3=0;
    cin>>a;



    int array[6];

    for (int i = 5; i >= 0; i--)
    {
        array[i] = a % 10;
        a /= 10;
    }

    for(int i =0 ; i<3; i++)
    {
        c=c+array[i];
    }


    for(int i =3 ; i<6; i++)
    {

        c1=c1+array[i];
    }

//cout<<c<<c1<<endl;
    sort(array,array+2);
    sort(array+3,array+6);



    if(c<c1)
    {
        if(c==0)
        {
            if(c1<10)
            cout<<1<<endl;
            else if(c1<19)
                cout<<2<<endl;
            else
                cout<<3<<endl;


        }
        else
        {
            c=c1-c;
            for(int i =2; i>=0; i++)
            {
                //cout<<array[i];
                c=c-(9-array[i]);
                c3++;

              //  cout<<c<<c1<<endl;
                if(c<=0)
                {
                    cout<<c3<<endl;
                    break;
                }


            }
        }
    }

    else  if(c1<c)

    {
        if(c1==0)
        {
            if(c<10)
            cout<<1<<endl;
            else if(c<19)
                cout<<2<<endl;
            else
                cout<<3<<endl;
        }

        else
        {
             c1=c-c1;
            for(int i =5; i>=3; i++)
            {



                //cout<<c1<<endl;

                //cout<<array[i];
               c1=c1-(9-array[i]);
                c3++;


               // cout<<c<<c1<<endl;

               cout<<c<<c1<<endl;


                if(c1<=0)
                {
                    cout<<c3<<endl;
                    break;
                }

            }

        }
    }
    else if(c1==c)
    {
        cout<<0<<endl;

    }

}
