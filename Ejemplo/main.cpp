#include <iostream>
using namespace std;

int multiplica(int a, int b);

int main(void){
    int a=7,b=8,c;

    cout<<"main INVOCA UNA VEZ A UNA FUNCION RECURSIVA PARA CALCULAR "<<a<<"*"<<b<<endl<<endl;

    c = multiplica(a,b);

    cout<<endl<<endl<<"main RECIBE DE LA UNICA FUNCION RECURSIVA QUE INVOCA: "<<c<<endl;

    return 0;
}

int multiplica(int a, int b){

    if(b>1){
        cout<<"Una funcion recursiva, recibe "<<a<<" y "<<b
            <<". Retorna "<<a<<" + lo que regrese otra con "<<a<<" y "<<b-1<<endl;
        return a + multiplica(a, b-1);
        }
    else{
        cout<<"Una funcion recursiva, recibe "<<a<<" y "<<b
            <<". Retorna "<<a;
        return a;
    }

}
