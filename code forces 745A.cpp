#include<bits/stdc++.h>
using namespace std;

string s;
set<string>S;
int main()
{
    cin>>s;int len = s.size();
    for(int i=0;i<len;i++)
        s+=s[i];
    for(int i=0;i<len;i++){
        string tmp;
        for(int j=0;j<len;j++)
            tmp+=s[i+j];
        S.insert(tmp);
    }
    cout<<S.size()<<endl;
}
