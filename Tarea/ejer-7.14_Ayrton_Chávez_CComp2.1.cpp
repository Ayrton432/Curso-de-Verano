#include <iostream>
#include <vector>

using namespace std;

int main() {
	const size_t tam = 20; 
	vector < int > v;
	size_t subscript = 0;
	bool duplicado = false;
	cout << "Ingrese 20 numeros que esten entre el 10 y el 100: " << endl;
 
	int i = 0;

	while (i <= tam) {
		duplicado = false;
		int valor = 0;
		cin >> valor;
		if ( valor >= 10 && valor <= 100 ) {
			for ( unsigned int j = 0; j < v.size(); ++j ) {
				if ( valor == v[j] ) {
					duplicado = true;
					break;
				} 
			} 
			if ( !duplicado ) {
				v.push_back(valor);
				++subscript;
			}
			else
				cout << "Numero duplicado" << endl;
				++i;
		} 
		else
			cout << "Numero invalido" << endl;
	} 
	cout << "Los numeros sin un duplicado son: ";
	for ( size_t index = 0; index < subscript; ++index )
		cout << v[index] << ' ';
		cout << endl;
	return 0;
} 
