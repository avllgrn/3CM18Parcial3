#include <iostream>
#include <fstream>
using namespace std;

int main(void){
    ofstream FSalida("archivo.txt");
    float a = 56.78;

    FSalida << a << endl;

    FSalida.close();


    ifstream FEntrada("archivo.txt");
    float otroFloat;

    FEntrada >> otroFloat;

    cout << otroFloat << endl;

    FEntrada.close();

    return 0;
}
