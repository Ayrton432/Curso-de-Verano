#include <iostream>

using namespace std;

int main() {
	
	int edad, MHR,MHR1,MHR2, mayor, menor;
	
	cout << "Ingrese su edad: " << endl;
	cin >> edad;
	
	MHR = 220 - edad;
	cout << "Frecuencia maximo para formula del 2001: " << MHR << endl;
	
	MHR1 = 208 - (0.7 * edad);
	cout << "Frecuencia maximo para formula del 2007: " << MHR1 << endl;
	
	MHR2 = 211 - (0.64 * edad);
	cout << "Frecuencia maximo para formula del 2012: " << MHR2 << endl;
	
	mayor = MHR;
	menor = MHR2;
	
	if (MHR1 > mayor) mayor = MHR1;
	if (MHR1 < menor) menor = MHR1;
	if (MHR < menor) menor = MHR;
	if (MHR < menor) menor = MHR;
	if (MHR2 > mayor) mayor = MHR2;
	if (MHR2 < menor) menor = MHR2;
	
	cout << "El mayor valor en el rango es: " << mayor << endl;
	cout << "El menor valor en el rango es: " << menor << endl;
	
	if (edad == 20 || edad < 20)
		cout << "La frecuancia cardiaca maxima para tu edad debe ser de 200 " << endl;
		
	if (edad == 30 || edad < 30 && edad > 20)
		cout << "La frecuancia cardiaca maxima para tu edad debe ser de 190 " << endl;
		
	if (edad == 40 || edad < 40 && edad > 30)
		cout << "La frecuancia cardiaca maxima para tu edad debe ser de 180 " << endl;
		
	if (edad == 50 || edad < 50 && edad > 40)
		cout << "La frecuancia cardiaca maxima para tu edad debe ser de 170 " << endl;
		
	if (edad == 60 || edad < 60 && edad > 50)
		cout << "La frecuancia cardiaca maxima para tu edad debe ser de 160 " << endl;
	
	if (edad == 70 || edad < 70 && edad > 60)
		cout << "La frecuancia cardiaca maxima para tu edad debe ser de 150 " << endl;
	
	if (edad == 80 || edad > 80)
		cout << "No se sobre-esfuerce y no se exija demasiado  " << endl;
		
	return 0;
}
