#include<bits/stdc++.h>
using namespace std;

 int main ()
 {
     char s1[1000001], s2[1000001];
   scanf("%s %s", s1, s2);
	int n = 0, m = 0;
	while (s1[n] == '0')
		n++;
	while (s2[m] == '0')
		m++;
	int a = strlen(s1 + n);
	int b = strlen(s2 + m);
	if (a < b)
		puts("<");
	else if (a > b)
		puts(">");
	else
	{
		int cmp = strcmp(s1 + n, s2 + m);
		puts(cmp > 0 ? ">" : (cmp == 0 ? "=" : "<"));
	}
	return 0;

 }


