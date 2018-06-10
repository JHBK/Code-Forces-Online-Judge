

  #include<bits/stdc++.h>



    using namespace std;


    int main()
    {



        int n;
        double m,r=8888888;

        scanf("%d%lf",&n,&m);


    for(int i=0; i<n; i++)

    {
        double a=0,b=0;
        scanf("%lf%lf",&a,&b);



        r=min(r,a/b);


    }

     printf("%.8lf\n",r*m);

    }
