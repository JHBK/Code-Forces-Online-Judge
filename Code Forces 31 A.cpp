#include <bits/stdc++.h>

using namespace std ;


int main ()
{

    int n,counter=0,c=0;
    scanf("%d",&n);
    int input[n],temp[n];

    for(int i=0 ; i<n; i++)
    {

        scanf("%d",&input[i]);
        temp[i]=input[i];

    }


    sort(input,input+n);

    for(int i=0; i<n; i++)
    {
        if(counter==1)
        {
            break;
        }

        for(int j=1; j<n-1; j++)
        {
            if(counter==1)
            {
                break;
            }

            for(int k=0; k<n; k++)
            {


                if(input[i]+input[j]==input[k])
                {
                    for(int i=0; i<n; i++)
                    {
                        if(input[k]==temp[i])
                        {
                            printf("%d",i+1);

                            break;
                        }
                    }
                    for(int i=0; i<n; i++)
                    {
                        if(input[j]==temp[i])
                        {
                            printf(" %d",i+1);
                            c=i;
                              break;
                        }
                    }
                    for(int o=0; o<n; o++)
                    {
                        if(input[i]==temp[o]&&o!=c)
                        {
                            printf(" %d",o+1);

                            break;
                        }
                    }
                    printf("\n");
                    counter=1;
                    break;
                }

                else
                {
                    continue;
                }

            }

        }
    }


    if(counter==0)
    {
        printf("-1\n");
    }


}
