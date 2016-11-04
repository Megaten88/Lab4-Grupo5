#include <iostream>
#include <cmath>
#include <stdlib.h>
#include <random>

using std::cout;
using std::cin;
using std::endl;

void imprimir(char**,char**,char**,char**,char**,char**);
void moverHorario(char** , char** , char** ,  char**  , char** );
void antiHorario(char** , char** , char** ,  char**  , char** );
void deleteAll(char**,char**,char**,char**,char**,char**);

int main(int argc, char const *argv[]) {
    int numero = 0;

    char ** frontal ;
    char ** trasera ;
    char ** superior ;
    char ** inferior ;
    char ** izquierda ;
    char ** derecha ;

    frontal = new char*[3];
    trasera = new char*[3];
    superior = new char*[3];
    inferior = new char*[3];
    izquierda = new char*[3];
    derecha = new char*[3];

    for (size_t i = 0; i < 3; i++) {
        frontal[i] = new char[3];
        trasera[i] = new char[3];
        superior[i] = new char[3];
        inferior[i] = new char[3];
        izquierda[i] = new char[3];
        derecha[i] = new char[3];
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0;  j < 3; j++) {
             frontal[i][j] = 'a';
             trasera[i][j] = 'b';
             superior[i][j] = 'c';
             inferior[i][j] = 'd';
             izquierda[i][j] = 'f';
             derecha[i][j] = 'e';
        }
    }

    imprimir(frontal,trasera,superior,inferior,derecha,izquierda);
    moverHorario(frontal,derecha,izquierda,superior,inferior);
    imprimir(frontal,trasera,superior,inferior,derecha,izquierda);
    moverHorario(frontal,derecha,izquierda,superior,inferior);
    imprimir(frontal,trasera,superior,inferior,derecha,izquierda);
    moverHorario(frontal,derecha,izquierda,superior,inferior);
    cout<<endl;
    imprimir(frontal,trasera,superior,inferior,derecha,izquierda);
    deleteAll(frontal,trasera,superior,inferior,derecha,izquierda);
    return 0;
}


void imprimir(char** frontal,char** trasera,char** superior,char** inferior,char** derecha,char** izquierda){
    cout<<"Cara Frontal"<<endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout <<"["<< frontal[i][j] <<"]";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<"Cara Trasera"<<endl;
     for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout <<"["<< trasera[i][j] <<"]";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<"Cara Superior"<<endl;
     for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout <<"["<< superior[i][j] <<"]";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<"Cara Inferior"<<endl;
     for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout <<"["<< inferior[i][j] <<"]";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<"Cara Derecha"<<endl;
     for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout <<"["<< derecha[i][j] <<"]";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<"Cara Izquierda"<<endl;
     for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout <<"["<< izquierda[i][j] <<"]";
        }
        cout<<endl;
    }
}

void deleteAll(char** frontal,char** trasera,char** superior,char** inferior,char** derecha,char** izquierda){
    for (int i = 0; i < 3; ++i)
    {
        delete[] frontal[i];
        delete[] trasera[i];
        delete[] superior[i];
        delete[] inferior[i];
        delete[] izquierda[i];
        delete[] derecha[i];
    }
    delete[] frontal;
    delete[] trasera;
    delete[] superior;
    delete[] inferior;
    delete[] izquierda;
    delete[] derecha;
    cout<<endl;
    cout<<"DeletedALL"<<endl;
}
/*
frontal[i][j];
trasera[i][j];
superior[i][j];
inferior[i][j];
izquierda[i][j];
derecha[i][j];
*/


void moverHorario(char** frontal , char** derecha, char** izquierda,  char** superior , char** inferior){

    char * datosSuperior = new char[3];
    char * datosInferior = new char[3];
    char * datosDerecha = new char[3];
    char * datosIzquierda = new char[3];

    for (int i = 0; i < 3; i++) {
         datosSuperior[i] = superior[2][i];
         datosInferior[i] = inferior[2][i];
         datosDerecha[i] =  derecha[i][0];
         datosIzquierda[i] = izquierda[i][0];
    }

    for (size_t i = 0; i < 3; i++) {
        std::cout << datosSuperior[i] << std::endl;
        std::cout << datosInferior[i] << std::endl;
        std::cout <<datosDerecha[i]  << std::endl;
        std::cout << datosIzquierda[i] << std::endl;
    }


    for (int i = 0; i < 3; i++) {
        superior[2][i] = datosIzquierda[i];
        inferior[0][i] = datosDerecha[i];
        derecha[i][0] = datosSuperior[i];
        izquierda[i][2] = datosInferior[i] ;
    }

    int n = 3;
    for(int i = 0; i < n; ++i) {
        for(int j = i + 1; j < n; ++j) {
            char temp = frontal[i][j];
            frontal[i][j] = frontal[j][i];
            frontal[j][i] = temp;
        }
    }
           for(int i = 0; i < n; ++i) {
               for(int j = 0; j < n / 2; ++j) {
                   char temp = frontal[i][n - j - 1];
                   frontal[i][n - j - 1] = frontal[i][j];
                   frontal[i][j] = temp;
               }
           }


    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n / 2; ++j) {
            char temp = frontal[i][n - j - 1];
            frontal[i][n - j - 1] = frontal[i][j];
            frontal[i][j] = temp;
        }
    }
    delete[] datosSuperior;
    delete[] datosInferior;
    delete[] datosDerecha;
    delete[] datosIzquierda;
}


void antiHorario(char** frontal,char** derecha,char** izquierda,char** superior, char** inferior){
    int * datosSuperior = new int[3];
    int * datosInferior = new int[3];
    int * datosDerecha = new int[3];
    int * datosIzquierda = new int[3];
    for (int i = 0; i < 3; ++i)
    {
        datosSuperior[i] = superior[2][i];
        datosInferior[i] = inferior[2][i];
        datosDerecha[i] =  derecha[i][0];
        datosIzquierda[i] = izquierda[i][0];
    }
    for (int i = 0; i < 3; ++i)
    {
        derecha[i][0] = datosInferior[i];
        superior[2][i]= datosDerecha[i];
        izquierda[i][2] = datosSuperior[i];
        inferior[0][i] = datosIzquierda[i];
    }
    delete[] datosSuperior;
    delete[] datosInferior;
    delete[] datosDerecha;
    delete[] datosIzquierda;
}
