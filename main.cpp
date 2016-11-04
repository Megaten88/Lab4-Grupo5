#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

void imprimir(char** , int);

int main(int argc, char const *argv[]) {
    vector<char ** > cubo;
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
        frontal[i] = new char*[3];
        trasera[i] = new char*[3];
        superior[i] = new char*[3];
        inferior[i] = new char*[3];
        izquierda[i] = new char*[3];
        derecha[i] = new char*[3];
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; i j 3; j++) {
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
