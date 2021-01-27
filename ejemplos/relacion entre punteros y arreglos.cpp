#include <iostream>

using namespace std;

int main () {
	int Arreglo[5];//Arreglo elementos elementos enteros
  
	for (int i = 0; i < 5; i++)
    Arreglo[i]=i + 1;//asignamos 1,2,3...5
    
	int *ptrEntero;//Declaracion puntero a un entero
  
	cout << "Arreglo[2] = " << Arreglo[2]<< endl;
	ptrEntero = Arreglo;
  
	cout << "Asigno ptrEntero = Arreglo" << endl;
	cout << "ptrEntero[2] = " << ptrEntero[2] << endl;
  
	ptrEntero = &Arreglo[0];//equivale a ptrEntero = Arreglo
  
	cout << "Asigno ptrEntero = &Arreglo[0]" << endl;
	cout << "ptrEntero[2] = " << ptrEntero[2] << endl;
	cout << endl << "Mostramos el arreglo por sus dos nombres: " << endl;
	for (int i = 0; i < 5; i++)
  
	cout << "ptrEntero["<<i<<"] = "<< ptrEntero[i] << " == "
	<< "Arreglo["<<i<<"] = " << Arreglo[i] << endl;
  return 0;
}


