#include <iostream>

using namespace std;

int main() {

    int numero,p,s,t,c,m;
	
	cout << "ingrese un numero: " << endl;;

	cin >> numero;

	p = numero%10;

	s = p/10;

	c = s/10;

	m = p*100+t*10+c;

	if (m = numero)
		cout<< "El Numero es Palindromo\n";
	
	else
		cout<< "El Numero no es Palindromo\n";
	

	return 0;
}
