//Ejercicio 2.30 del capitulo 2

#include <iostream>

using namespace std;

int main () {
	
	int peso;
	double altura, BMI;
	
	cout << "Ingrese su peso en kilos: " << endl;
	cin >> peso;
	
	cout << "Ingrese su altura en metros: " << endl;
	cin >> altura;
	
	BMI = peso/(altura * altura);
	cout << "El indice de masa corporal es: " << BMI << endl;
	
	if (BMI < 18.5)
		cout << "Tu peso es muy bajo" << endl;
		
	if (BMI > 18.5 && BMI < 24.9)
		cout << "Tu peso es normal" << endl;
		
	if (BMI > 24.9 && BMI < 29.9)
		cout << "Tu peso es muy elevado" << endl;
		
	if (BMI > 29.9)
		cout << "Tu peso es demasiado elevado(obesidad)" << endl;		
		
	return 0;
}
