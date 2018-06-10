#include<bits/stdc++.h>
using namespace std;
 int main ()
 {
   int  a,res=0;
   int m;
   int ai[110];
   scanf("%d",&a)  ;
   scanf("%d",&m)  ;
  for (int i=0;i<a;i++)
  {
      scanf("%d",&ai[i]);
  }
      sort(ai,ai+a);


     for(int i=a-1;m>0;i--)
     {
             res++;
            m=m-ai[i];


     }
     printf("%d\n",res);


 }

