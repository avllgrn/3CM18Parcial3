#include <iostream>
using namespace std;

int potencia(int a, int b);

int main(void){
    int a=2,b=8,c=1;

    cout<<endl<<endl
        <<"main CALCULA ITERATIVAMENTE "<<a<<"^"<<b
        <<endl<<endl;

    while(b>=1){
        c = c * potencia(a,b);
        cout<<"main calcula c = "<<c<<endl;
        b--;
    }

    cout<<endl<<endl<<"RESULTADO: "<<c<<endl;

    return 0;
}

int potencia(int a, int b){

    cout<<"Misma funcion, recibe "<<a<<" y "<<b<<". Retorna "<<a<<". ";

    return a;
}
