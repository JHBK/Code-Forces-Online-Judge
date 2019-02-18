#include<bits/stdc++.h>
using namespace std;

int main()
{
long long int x,y,z,a,b,c;

int t1,t2;


scanf("%lld %lld %lld",&x,&y,&z);
scanf("%lld %lld %lld",&a,&b,&c);

t1=a-x;
if(t1>=0){
    t1=t1+b;

}
else{
    cout<<"NO"<<endl;
    exit(0);

}
t1=t1-y;


if(t1>=0){
    t1=t1+c;
}
else{
    cout<<"NO"<<endl;
    exit(0);

}

t1=t1-z;

if(t1>=0){
    cout<<"YES"<<endl;
    exit(0);
}
else{
    cout<<"NO"<<endl;
    exit(0);

}


}

