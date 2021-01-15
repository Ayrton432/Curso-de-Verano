//Ejercicio 2.24 del capitulo 2
#include <iostream>

using namespace std;

int main () {
	
	int a,b,sum;
	
	
	cout << " Ingrese el primer numero: " << endl;
	cin >> a;
	
	cout << " Ingrese el segundo numero: " << endl;
	cin >> b;
	
	if (a % 2 == 1)
		cout << " El numero "<< a << " es impar " << endl;
		
	if (b % 2 == 1)
		cout << " El numero "<< b << " es impar " << endl;
		
	sum = a + b;
	if (sum % 2 == 1)
		cout << " El numero "<< sum << " es impar " << endl;
	return 0;
}
