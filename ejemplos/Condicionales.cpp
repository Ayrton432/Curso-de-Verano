#include <iostream>

using namespace std;

int main(){	
	
	/*
	* Operadores Aritmeticos
	* ======================
	*   (x == y) => comparación de equivalencia
	*   (x != y) => comparación de equivalencia
	*   <   >   >=   <=  (operadores relacionales)
	*/

	int age;
	cout << "Ingrese su edad: ";
	cin >> age;
	
	if (age >= 18)
	 cout << "Es mayor de edad!!" << endl;
	 
	cout << "fin del programa" << endl;
	return 0;
}
