#include<bits/stdc++.h>
using namespace std;

bool f(int x)
{
    if(x%400==0) return 1;
    if(x%4==0&&x%100!=0) return 1;
    return 0;
}

int main()
{
    int n;
    scanf("%d",&n);
    int s=f(n);
    int x=0;
    int now=n+1;
    int sum=0;
    while(1)
    {
        int t=f(now);
        if(t==1) sum=sum+366;
        else sum=sum+365;
        int g=(x+sum)%7;
         if(t==s&&g==x)
        {
            printf("%d\n",now);
            break;
        }
        now++;
    }
    return 0;
}
