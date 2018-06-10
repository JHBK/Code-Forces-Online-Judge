#include<bits/stdc++.h>
#define rep1(i,a,b) for (int i = a;i <= b;i++)
using namespace std;
int main()
{
  int n;
string s;
     cin >> n;
    cin >> s;
     int len = s.size();
      s = ' '+s;
       string ans = " ";
      int now = 0;
      rep1(i,1,len)
       {
        if (now == 0)
            ans+=s[i],now++;
        else
        {
            int tnow = now+1,po;
            if (tnow&1)
            {
                po = (tnow/2) + 1;
                string temp ="";
                temp += s[i];
                ans.insert(po,temp);
            }
            else
            {
                po= (tnow/2);
                string temp ="";
                temp += s[i];
                ans.insert(po,temp);
            }
            now++;
        }
    }

   ans.erase(0,1);
    cout << ans << endl;
    return 0;
}
