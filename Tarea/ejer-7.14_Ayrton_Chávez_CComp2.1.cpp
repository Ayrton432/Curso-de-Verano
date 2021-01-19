#include <iostream>
#include <vector>

using namespace std;

int main() {
	const size_t tam = 20; 
	vector< int > v;
	size_t subscript = 0;
	bool duplicate = false;
	cout << "Ingrese 20 numeros que esten entre el 10 y el 100: " << endl;
 
	unsigned int i = 0;

	while (i <= tam) {
		duplicate = false;
		int value = 0;
		cin >> value;
		if ( value >= 10 && value <= 100 ) {
			for ( unsigned int j = 0; j < v.size(); ++j ) {
				if ( value == v[j] ) {
					duplicate = true;
					break;
				} 
			} 
			if ( !duplicate ) {
				v.push_back( value );
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
		cout << v[ index ] << ' ';
		cout << endl;
	return 0;
} 
