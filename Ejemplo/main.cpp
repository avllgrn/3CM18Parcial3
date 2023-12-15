#include <iostream>
#include <sstream>
using namespace std;

int main(void){
    string Cadena;
    int entero;
    cout<<"Ingresa varios enteros separados por un espacio en blanco ";
    getline(cin,Cadena);

    cout<<"Ingresaste: "<<Cadena<<endl<<endl;

    stringstream ss(Cadena);

    cout<<"Cada numero por separado:"<<endl;
    while(ss>>entero){
        cout<<entero<<endl;
    }

    return 0;
}
