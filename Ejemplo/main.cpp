#include <iostream>
#include <fstream>
using namespace std;

int main(void){
    ofstream FSalida("archivo.txt");
    int a = 5;
    float b = 56.78;
    string c = "Una Cadena Con Espacios.";
    string saltoDeLinea;

    FSalida << a << endl;
    FSalida << b << endl;
    FSalida << c << endl;

    FSalida.close();


    ifstream FEntrada("archivo.txt");
    int otroInt;
    float otroFloat;
    string otroString;

    FEntrada >> otroInt
             >> otroFloat;
    getline(FEntrada,saltoDeLinea);
    getline(FEntrada,otroString);

    cout << otroInt << endl;
    cout << otroFloat << endl;
    cout << otroString << endl;

    FEntrada.close();

    return 0;
}
