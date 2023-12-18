#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <fstream>
#include <sstream>
using namespace std;

int main(void){
    srand(time(NULL));
    string linea,enter;
    int m,n,mF,nF,i,j;
    int M[50][50];
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

    for(i=0;i<mF;i++){
        getline(FE,linea);
        stringstream ss(linea);
        for(j=0;j<nF;j++){
            ss>>M[i][j]>>separador;
        }
    }
    FE.close();

    cout<<endl<<"M "<<mF<<"x"<<nF<<endl;
    for(i=0;i<mF;i++){
        for(j=0;j<nF;j++){
            cout<<M[i][j]<<"\t";
        }
        cout<<endl;
    }

    return 0;
}
