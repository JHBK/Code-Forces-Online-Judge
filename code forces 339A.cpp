#include <iostream>
#include<algorithm>
#include<stdio.h>
#include<cstring>
using namespace std ;
int main()
{
	char a[5000];
	int b[5000];
	cin>>a;
	int len  = strlen(a);
	int sum ;
	sum=0;
	for(int i = 0 ; i < len ; i++)
	{
		if(a[i]=='+')
		{
			sum++;
		}
	}
	int j ;
	j=0;
	for(int i = 0 ; i < len ; i++)
	{
		if(a[i]!='+')
		{
			b[j]=a[i]-'0';
			j++;
		}
	}
	sort(b,b+j);
	printf("%d",b[0]);
	for(int i = 1 ; i < j ;i++)
	{
		printf("+%d",b[i]);
	}
	return 0;

}
