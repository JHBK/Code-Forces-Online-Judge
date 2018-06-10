#include <iostream>
#include<stdio.h>
using namespace std;
int main(){

    int n,cnt = 0;
    cin >> n;
    string str;
    cin >> str;
    for(int i = 0; i < str.size()-1; i++){
        while(str[i]==str[i+1]){
            cnt++;
            i++;
        }
    }
    cout << cnt << endl;
    return 0;
}
