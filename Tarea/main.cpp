#include <iostream>
#include "IntegerArray.h"
#include "integerArray.cpp"

using namespace std;

int main() {

    IntegerArray a(3);

    //TODO: Implementar un método de la clase para insertar  
    //TODO: elementos al final.
    a.push_back(4);
    a.push_back(2);
    a.push_back(8);
    
    //TODO: Implementar un método de la clase para imprimir  
    //TODO: los elementos.
	a.print();

    //TODO: Implementar un método de la clase para eliminar  
    //TODO: elementos del final.
    a.remove();
    
    a.print();

    return 0;
}

