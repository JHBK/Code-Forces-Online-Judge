#include<bits/stdc++.h>

using namespace std ;


int main (){

long long int n,c=0;

cin>>n;

for(int i=1 ;i<n;i++){


    if(n%i==0){
        c++;
    }
}
cout<<c<<endl;

}
