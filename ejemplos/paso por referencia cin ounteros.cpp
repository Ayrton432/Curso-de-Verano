#include <iostream>
#include <stdio.h>

using namespace std;

void pasoPorReferencia(int *&referencia){

    cout<<referencia<<endl;

    int *dir_cambio, m = 2;
    dir_cambio = &m;

    cout<<dir_cambio<<endl;

    referencia = dir_cambio;

    cout << referencia << endl;

}

int main(int argc, char const *argv[]) {

    int *dir_entero, n = 13;

    dir_entero = &n;

    cout << dir_entero;
    pasoPorReferencia(dir_entero);

    cout << dir_entero << endl;

    return 0;
}
