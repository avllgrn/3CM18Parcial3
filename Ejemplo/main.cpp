#include <iostream>
#include <stdlib.h>
#include <sstream>
using namespace std;

int main(void){
    string VariosEnterosEnCadena;
    string UnEnteroEnCadena;
    char separador=',';

    cout<<"Ingresa varios enteros cada uno seguido por una coma ";
    getline(cin,VariosEnterosEnCadena);//Se guardan todos los numeros como una sola cadena de caracteres numericos separados por coma

    stringstream ss(VariosEnterosEnCadena); //Se conecta un canal (stringstream)
                                            //hacia la cadena de caracteres numericos separados por coma

    cout<<"Cada numero por separado:"<<endl;
    while( !ss.eof() ){ //Mientras el canal no haya llegado al fin del flujo de caracteres numericos,

        getline(ss, UnEnteroEnCadena, separador);   //se extrae del canal una cadena numerica
                                                    //desde una posicion hasta encontrarse el separador(la coma).

        cout<<UnEnteroEnCadena<<endl;//Se muestra cada cadena de caracteres numericos extraida
    }

    return 0;
}
