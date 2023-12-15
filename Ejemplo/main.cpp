#include <iostream>
#include <fstream>
using namespace std;

int main(void){
    ofstream FSalida("archivo.txt");
    char a = '@';

    FSalida << a << endl;

    FSalida.close();


    ifstream FEntrada("archivo.txt");
    char otroChar;

    FEntrada >> otroChar;

    cout << otroChar << endl;

    FEntrada.close();

    return 0;
}
