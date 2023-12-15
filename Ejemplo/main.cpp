#include <iostream>
#include <fstream>
using namespace std;

int main(void){
    ofstream FSalida("archivo.txt");
    string a = "UnaCadenaCualquiera.";

    FSalida << a << endl;

    FSalida.close();


    ifstream FEntrada("archivo.txt");
    string otroString;

    FEntrada >> otroString;

    cout << otroString << endl;

    FEntrada.close();

    return 0;
}
