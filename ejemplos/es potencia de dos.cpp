#include <iostream>

using namespace std;

bool esPotenciaDeDos(int num) {
	
	int i = 1;
	while(i <= num) {
		if(i == num)
			return true;
		i *= 2;
	}
	return false;
}

int main() {
	
	int num;
	
	cout << "Ingrese un numero: " << endl;
	cin >> num;
	
	cout << esPotenciaDeDos(num) << endl;
}
