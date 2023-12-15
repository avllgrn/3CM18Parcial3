#include <iostream>
#include <fstream>
using namespace std;

int main(void){
    ofstream FSalida("archivo.txt");
    int a = 5;

    FSalida << a << endl;

    FSalida.close();


    ifstream FEntrada("archivo.txt");
    int otroInt;

    FEntrada >> otroInt;

    cout << otroInt << endl;

    FEntrada.close();

    return 0;
}
