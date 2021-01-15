//Ejercicio 2.18 del capitulo 2

#include <iostream>

using namespace std;

int main () {
	
	int a,b;
	
	cout << "Ingresar el primer numero: " << endl;
	cin >> a;
	cout << "Ingresar el segundo numero: " << endl;
	cin >> b;
	
	if (a > b)
		cout << a << " Es el mayor " << endl;
	else
		cout << b << " Es el mayor " << endl;
		
	if (a == b) 
		cout << " Los numeros son iguales " << endl;
	
	return 0;
}
