#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

void imprimir(char** , int);

void moverF();
void moverf();

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
             izquierda[i][j] = 'e';
             derecha[i][j] = 'f';
        }
    }

    return 0;
}


void imprimir(char** matriz ){

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout <<"["<< matriz[i][j] <<"]";
        }
            cout<<endl;
    }
}


void moverF(char** frontal , char** derecha, char** izquierda,  char** superior , char** inferior){

    int * datosSuperior = new int[3];
    int * datosInferior = new int[3];
    int * datosDerecha = new int[3];
    int * datosIzquierda = new int[3];


    for (int i = 0; i < 3; i++) {
         datosSuperior[i] = superior[2][i];
         datosInferior[i] = inferior[2][i];
         datosDerecha[i] =  derecha[i][0];
         datosIzquierda[i] = izquieda[i][0];
    }

    for (int i = 0; i < 3; i++) {
        superior[2][i] = datosDerecha[i];
        inferior[2][i];
        derecha[i][0];
        izquieda[i][0];

    }


}
