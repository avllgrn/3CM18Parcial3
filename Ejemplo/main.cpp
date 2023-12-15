#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <fstream>
using namespace std;

int main(void){
    srand(time(NULL));
    ofstream FS("datos.txt");
    int i,n,entero;

    cout<<"Cuantos datos? ";cin>>n;
    for(i=0;i<n;i++)
        FS << rand()%100 << endl;
    FS.close();

    ifstream FE("datos.txt");

    while(FE >> entero){
        cout<<entero<<endl;
    }
    FE.close();

    return 0;
}
