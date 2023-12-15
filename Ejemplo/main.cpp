#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <fstream>
using namespace std;

int main(void){
    srand(time(NULL));
    ofstream FS("datos.txt");
    int i,entero;
    char caracter;

    for(i=0;i<5;i++)
        FS << rand()%100 << ",";
    FS.close();

    ifstream FE("datos.txt");

    FE >> entero >> caracter;
    cout<<entero<<endl;
    FE >> entero >> caracter;
    cout<<entero<<endl;
    FE >> entero >> caracter;
    cout<<entero<<endl;
    FE >> entero >> caracter;
    cout<<entero<<endl;
    FE >> entero >> caracter;
    cout<<entero<<endl;
    FE.close();

    return 0;
}
