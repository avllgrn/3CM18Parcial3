#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <fstream>
#include <sstream>
using namespace std;

int main(void){
    srand(time(NULL));
    string linea,valor,enter;
    int m,n,mF,nF,i,j;
    char separador;

    cout<<"Dame m ";cin>>m;
    cout<<"Dame n ";cin>>n;

    ofstream FS("matriz.txt");
    FS<<m<<","<<n<<","<<endl;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            FS << rand()%100 <<",";
        }
        FS<<endl;
    }
    FS.close();

    ifstream FE("matriz.txt");
    getline(FE,linea);
    stringstream ssOrden(linea);
    ssOrden >> mF >> separador
            >> nF >> separador;

    cout<<endl<<"M "<<mF<<"x"<<nF<<endl;
    for(i=0;i<mF;i++){
        getline(FE,linea);
        stringstream ssFila(linea);
        while( !ssFila.eof() ) {
            getline(ssFila, valor, separador);
            cout << valor <<"\t";
        }
        cout<<endl;
    }
    FE.close();

    return 0;
}
