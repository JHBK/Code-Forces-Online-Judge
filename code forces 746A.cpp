    #include<iostream>
    #include<string>
    #include<cstring>
    #include<cstdio>
    #include<algorithm>
    using namespace std;

    int main()
    {
        int a,b,c;
        cin>>a>>b>>c;
        for(int i=a;i>=0;i--){
            if(2*i<=b&&4*i<=c){
                printf("%d\n",i+2*i+4*i);
                break;
            }
        }
        return 0;
    }


