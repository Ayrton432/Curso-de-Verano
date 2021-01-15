#include <iostream>

using namespace std;

int main(){
	
	int num1;
	int num2;
	cout << "Ingrese el primer numero: " << endl;
	cin >> num1;
	
	cout << "Ingrese el segundo numero: " << endl;
	cin >> num2;	
	
	if (num1 > num2)
		cout << "El numero " << num1 << " es mayor que el numero " << num2 << endl;
	if (num1 < num2)
		cout << "El numero " << num1 << " es menor que el numero " << num2 << endl;
	else
		cout << "Los numeros son iguales" << endl;	
	return 0;
}
