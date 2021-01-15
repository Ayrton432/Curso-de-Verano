//Ejercicio 2.16 del capitulo 2

#include <iostream>

using namespace std;

int main () {
	
	int a,b,sum,res,prod,div;
	
	cout << "Ingrese el primer numero: " << endl;
	cin >> a;
	cout << "Ingrese el segundo numero: " << endl;
	cin >> b;
	
	sum = a + b;
	cout << "La suma es: " << sum << endl;
	
	res = a - b;
	cout << "La resta es: " << res << endl;
	
	prod = a * b;
	cout << "El producto es: " << prod << endl;
	
	div = a / b;
	cout << "La division es: " << div << endl;	
	
	return 0;
}
