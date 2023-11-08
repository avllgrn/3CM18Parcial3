#include <iostream>
using namespace std;

long long fibonacci(long long n);

int main(void){
    int x=7;
    cout<<"fibonacci("<<x<<") = "<<fibonacci(x)<<endl;
    return 0;
}
long long fibonacci(long long n){
    long long a=0,b=1,c=0;
    if(n==1||n==0)
        return n;
    else{
        for(int i=2; i<=n; i++){
            c = a+b;
            a=b;
            b=c;
        }
    }
    return c;
}
