#include<bits/stdc++.h>
using namespace std;
 int main ()
 {
  int a,b,c,d,e;
  scanf("%d",&a);
  getchar();
  scanf("%d%d",&b,&c);
  d=b+c;
  e=a+(d/60);
  e=e%24;
  d=d%60;
 printf("%02d:%02d\n", e, d);

 }
