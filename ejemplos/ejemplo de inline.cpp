#include <iostream>

using namespace std;

inline float CalcularArea(float base, float altura);


int main() {
	
	int val1, val2;
	
	cout << "Ingrese el valor de la base: " << endl;
	cin >> val1;
	
	cout << "Ingrese el valor de la base: " << endl;
	cin >> val1;
	
	cout << "El area del rectangulo es: " << CalcularArea(val1, val2);
	return 0;
	
}

inline float CalcularArea(float base, float altura) {return(base * altura);}


