// programa que indique si es primo o no
#include <iostream>

using namespace std;

int main() {

	long long num;
	
	cout << "ingrese el numero: " << endl;
	cin >> num;

	for (int i = 1; i <= num/2; i++) {
		if (num == 1) {
			cout << "es primo";
		}
		if (num % i == 0) {
			if (i == num/2) {
				cout << num << " no es primo" << endl;
			}
			continue;
		}
		else if ((num % i != 0) && (i == num / 2)) {
			cout << num << " es primo" << endl;
		}
	}
}
