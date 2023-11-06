#include <iostream>
using namespace std;

int multiplica(int a, int b);

int main(void){
    int a=7,b=8,c=0;

    cout<<endl<<endl
        <<"main CALCULA ITERATIVAMENTE "<<a<<"*"<<b
        <<endl<<endl;

    while(b>=1){
        c = c + multiplica(a,b);
        cout<<"main calcula c = "<<c<<endl;
        b--;
    }

    cout<<endl<<endl<<"RESULTADO: "<<c<<endl;

    return 0;
}

int multiplica(int a, int b){

    cout<<"Misma funcion, recibe "<<a<<" y "<<b<<". Retorna "<<a<<". ";

    return a;
}
