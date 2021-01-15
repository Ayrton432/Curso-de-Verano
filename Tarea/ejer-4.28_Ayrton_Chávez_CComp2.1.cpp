#include <iostream>

using namespace std;

int main() {
	
	int binario, resultado, resto = 0;
	int digito[8];
	
	cout << "Introduce el numero binario: " << endl;
	cin >> binario;
	
	for (int i = 0; i < 8; i++)
	{
		digito[i] = binario % 10;
		binario /= 10;
	}
	
	for(int i = 7; i >= 0; i--)
	{
		resultado = (resto * 2) + digito[i];
		resto = resultado;
	}
	
	cout << "El numero equivalente en decimal es: " << resultado << endl;
	
	return 0;
}
