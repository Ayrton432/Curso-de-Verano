#include <iostream>

using namespace std;

int main() {
	
	int num;
	
	cout << "Ingrese un numero: " << endl;
	cin >> num;
	
	if (num == 0 || num == 1 || num == 4)
		cout << "El numero no es primo" << endl;
	for (int x = 2; x < num / 2; x++) {
		if (num % 2 == 0)
			cout << "El numero no es primo" << endl;
	}
	cout << "El numero es primo" << endl;
	
	return 0;
}
