#include<bits/stdc++.h>

using namespace std;

int main ()
{

int n, a,b;

cin>>n>>a>>b;

int ai[a],bi[b],no[n];

for(int i = 0 ; i<n ; i++)
{

    no[i]=0;

}


for (int i =0 ; i<a ; i++)
{

    cin>>ai[i];
    no[ai[i]-1]=1;

   // cout<<no[ai[i]-1]<<endl;


}

for (int i =0 ; i<b ; i++)
{

    cin>>bi[i];
    if(no[bi[i]-1]==1)
    {
     continue;
    }
    else{

      no[bi[i]-1]=2;
       //cout<<no[bi[i]-1]<<endl;
    }



}

for (int i =0 ; i<n-1 ; i++)
{

   cout<<no[i]<<" ";

}
cout<<no[n-1]<<endl;



}
