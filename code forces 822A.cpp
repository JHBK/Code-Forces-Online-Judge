#include <iostream>
using namespace std;

int factorial(unsigned long long int n)
{
    if(n > 1)
        return n * factorial(n - 1);
    else
        return 1;
}

int main()
{
    unsigned long long int n1, n2, a;

    cin >> n1 >> n2;

   a=min(n1,n2);


    cout<< factorial(a)<<endl;
    return 0;
}
