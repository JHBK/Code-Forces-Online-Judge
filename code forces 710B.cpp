#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int a[300004];

        cin>>n;
        for(int i = 1; i <= n; ++i)  scanf("%d", &a[i]);
         sort(a+1,a+1+n);
      printf("%d\n",a[(n+1)/2]);

    return 0;
}
