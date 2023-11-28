#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

class Arbol{
private:
    class Nodo{
    public:
        Nodo* izquierdo;
        float dato;
        Nodo* derecho;
        Nodo(void){
            izquierdo = NULL;
            dato = 0;
            derecho = NULL;
            //cout<<"Nodo construido..."<<endl;
        };
        Nodo(Nodo* izq, float d, Nodo* der){
            izquierdo = izq;
            dato = d;
            derecho = der;
            //cout<<"Nodo construido..."<<endl;
        };
        ~Nodo(void){
            //cout<<"Nodo destruido..."<<endl;
        };
    };
    Nodo* raiz;
    void inserta(Nodo* aqui, float d){
        if(d <= aqui->dato && aqui->izquierdo==NULL)
            aqui->izquierdo = new Nodo(NULL,d,NULL);

        else if(d > aqui->dato && aqui->derecho==NULL)
            aqui->derecho = new Nodo(NULL,d,NULL);

        else if(d <= aqui->dato && aqui->izquierdo!=NULL)
            inserta(aqui->izquierdo,d);

        else if(d > aqui->dato && aqui->derecho!=NULL)
            inserta(aqui->derecho,d);
    };
    void liberaArbol(Nodo* aqui){
        if(aqui != NULL){
            liberaArbol(aqui->izquierdo);
            liberaArbol(aqui->derecho);
            cout<<aqui->dato<<" ";
            delete aqui;
        }
    };
    void muestraPreOrdem(Nodo*aqui){
        if(aqui != NULL){
            cout<<aqui->dato<<" ";
            muestraPreOrdem(aqui->izquierdo);
            muestraPreOrdem(aqui->derecho);
        }
    };
    void muestraPostOrdem(Nodo*aqui){
        if(aqui != NULL){
            muestraPostOrdem(aqui->izquierdo);
            muestraPostOrdem(aqui->derecho);
            cout<<aqui->dato<<" ";
        }
    };
    void muestraInOrdem(Nodo*aqui){
        if(aqui != NULL){
            muestraInOrdem(aqui->izquierdo);
            cout<<aqui->dato<<" ";
            muestraInOrdem(aqui->derecho);
        }
    };
    void muestraInOrdemR(Nodo*aqui){
        if(aqui != NULL){
            muestraInOrdemR(aqui->derecho);
            cout<<aqui->dato<<" ";
            muestraInOrdemR(aqui->izquierdo);
        }
    };
    bool busca(Nodo* aqui, float d){
        //Tarea
    };
    int cuentaNodos(Nodo* aqui){
        //Tarea
    };
    float sumaNodos(Nodo* aqui){
        //Tarea
    };
    float buscaMenor(Nodo* aqui){
        //Tarea
    };
    float buscaMayor(Nodo* aqui){
        //Tarea
    };
    int alturaDeArbol(Nodo* aqui){
        //Tarea
    };

public:
    Arbol(void){
        raiz = NULL;
    };
    ~Arbol(void){
        liberaArbol();
    };
    bool estaVacio(void){
        return raiz == NULL;
    };
    void inserta(float d){
        if(estaVacio())
            raiz = new Nodo(NULL,d,NULL);
        else
            inserta(raiz,d);
    };
    void liberaArbol(void){
        liberaArbol(raiz);
        raiz = NULL;
    };
    void muestraPreOrdem(void){
        muestraPreOrdem(raiz);
    };
    void muestraPostOrdem(void){
        muestraPostOrdem(raiz);
    };
    void muestraInOrdem(void){
        muestraInOrdem(raiz);
    };
    void muestraInOrdemR(void){
        muestraInOrdemR(raiz);
    };
    bool busca(float d){
        return busca(raiz,d);
    };
    int cuentaNodos(void){
        return cuentaNodos(raiz);
    };
    float sumaNodos(void){
        return sumaNodos(raiz);
    };
    float buscaMenor(void){
        if(estaVacio())
            return -1;
        else
            return buscaMenor(raiz);
    };
    float buscaMayor(void){
        if(estaVacio())
            return -1;
        else
            return buscaMayor(raiz);
    };
    void muestraEnAnchura(void){
        //Tarea
    };
    void muestraEnProfundidad(void){
        //Tarea
    };
    int alturaDeArbol(void){
        if (estaVacio())
            return 0;
        else
            return alturaDeArbol(raiz)-1;
    };
};


int main(void){
    Arbol A;
    A.inserta(50);
    A.inserta(30);
    A.inserta(70);
    A.inserta(20);
    A.inserta(40);
    A.inserta(60);
    A.inserta(80);
    A.inserta(25);
    A.inserta(35);
    A.inserta(55);
    A.inserta(90);

    cout<<endl<<endl
        <<"Muestra preordem:"<<endl;
    A.muestraPreOrdem();
    cout<<endl<<endl;

    cout<<endl<<endl
        <<"Muestra posordem:"<<endl;
    A.muestraPostOrdem();
    cout<<endl<<endl;

    cout<<endl<<endl
        <<"Muestra inordem:"<<endl;
    A.muestraInOrdem();
    cout<<endl<<endl;

    for(float d=0; d<=100; d++)
        if(A.busca(d))
            cout<<d<<" SI esta"<<endl;
        else
            cout<<d<<" NO esta"<<endl;

    cout<<endl<<endl
        <<"En anchura:"
        <<endl<<endl;
    A.muestraEnAnchura();
    cout<<endl<<endl;

    cout<<endl<<endl
        <<"En profundidad:"
        <<endl<<endl;
    A.muestraEnProfundidad();
    cout<<endl<<endl;

    cout<<endl<<endl
        <<"Hay "<<A.cuentaNodos()<<" nodos."
        <<endl<<endl;

    cout<<endl<<endl
        <<"Los nodos suman: "<<A.sumaNodos()
        <<endl<<endl;

    cout<<endl<<endl
        <<"el menor es: "<<A.buscaMenor()
        <<endl<<endl;

    cout<<endl<<endl
        <<"el mayor es: "<<A.buscaMayor()
        <<endl<<endl;

    cout<<endl<<endl
        <<"Altura del arbol: "
        <<A.alturaDeArbol()
        <<endl<<endl;

    cout<<endl<<endl
        <<"Fin del main:"
        <<endl<<endl;

    return 0;
}
