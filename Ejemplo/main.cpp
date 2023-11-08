#include <iostream>
using namespace std;

long long fibonacci(long long n);

int main(void){
    int x=5;
    cout<<endl<<"fibonacci("<<x<<") = "<<fibonacci(x)<<endl;
    return 0;
}

long long fibonacci(long long n){
    if(n-2>=0 && n-1>=0)
        cout<<"f("<<n<<") llama primero a "<<"f("<<n-2<<") y luego a "<<"f("<<n-1<<")"<<endl;
    else
        cout<<"f("<<n<<") retorna "<<n<<endl;

    if(n>1)
        return fibonacci(n-2) + fibonacci(n-1);
    else
        return n;
}
