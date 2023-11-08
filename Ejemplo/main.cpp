#include <iostream>
using namespace std;

long long factorial(int n);

int main(void){
    int x=7;

    cout<<x<<"! = f("<<x<<") = "<<factorial(x)<<endl;

    return 0;
}

long long factorial(int n){
    long long f=1;

    for(int i=2; i<=n; i++)
        f *= i;

    return f;
}
