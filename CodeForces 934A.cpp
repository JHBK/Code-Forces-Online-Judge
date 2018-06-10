#include<bits/stdc++.h>

using namespace std ;

typedef long long ll;
const ll INF=(1LL<<60)-1;


int main (){


long long int n,m;

cin>>n>>m;

long long int an[n],am[m];




for(int i=0 ;i<n;i++){

        cin>>an[i];

}


for(int i=0 ;i<m;i++){

        cin>>am[i];

}


long long int check,res=INF;



 for(int i=0;i<n;i++)
    {
        check=-INF;
        for(int j=0;j<n;j++)if(j!=i){
            for(int k=0;k<m;k++){
                check=max(check,an[j]*am[k]);}}
            res=min(res,check);

    }



cout<<res<<endl;



}

