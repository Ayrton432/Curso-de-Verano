//Ejercicio 2.20 del capitulo 2
#include <iostream>

using namespace std;

int main () {
	
	int radio, circu, diam, area;
	float PI = 3.14159;
	
	cout << "Ingrese el valor del radio: " << endl;
	cin >> radio;
	
	cout << " El diametro es: " << (diam = radio * 2) << endl;
	
	cout << " La circunferencia es: " << (circu = PI * diam) << endl;
	
	cout << " El area es: " << (area = PI * radio * radio) << endl;
	
	return 0;
}
