#include <iostream>
#include <sstream>
using namespace std;

int main(void){
    string Cadena;
    int entero;
    char caracter;
    cout<<"Ingresa varios enteros cada uno seguido por una coma ";
    getline(cin,Cadena);

    cout<<"Ingresaste: "<<Cadena<<endl<<endl;

    stringstream ss(Cadena);

    cout<<"Cada numero por separado:"<<endl;
    while(ss>>entero>>caracter){
        cout<<entero<<endl;
    }

    return 0;
}
