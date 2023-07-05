#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
    
    int t ,k, arr[1000],temp=1,ii=1,i=1;
   
    
    
    while (i<1667)
    {
        
        if (((temp%3)==0) or ((temp%10)==3)){
           i++;
           temp++;
          
        }
        else{
            
            arr[ii]=temp;
            i++;
            temp++;
            ii++;
            
        }
    }
    
    
    cin>>t;
    
    for (int j=0;j<t;j++){
        
        cin>>k;
        cout<<arr[k]<<endl;
        
    }
    
      
      
    return 0;
}