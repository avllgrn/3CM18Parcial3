#include <iostream>
using namespace std;

long long factorial(long long n);

int main(void){
    int x=7;
    cout<<endl<<x<<"! = f("<<x<<") = "<<factorial(x)<<endl;
    return 0;
}
long long factorial(long long n){
    long long f;
    cout<<"f("<<n<<")"<<endl;
    if(n>0){
        f = n * factorial(n-1);
        cout<<"f("<<n<<") retorna "<<f<<endl;
        return f;
    }
    else{
        cout<<endl<<"f("<<n<<") retorna "<<1<<endl;
        return 1;
    }
}
