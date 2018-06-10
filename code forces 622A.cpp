#include<bits/stdc++.h>
using namespace std;
 int main ()
 {

   long long  n , d = 1;
   cin >> n;
   while (n > d) {
      n -= d;
      d++;
   }
   cout << n << endl;
   return 0;

 }
