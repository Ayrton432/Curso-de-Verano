#include <iostream>
using namespace std;
int main() {
	int divisor = 1, divisores = 0, num = 0;
	cout << "Ingrese numero: "<< endl;
	cin >> num;
	do {
		if (num % divisor == 0) {
			divisores++;
		}
		divisor++;
	} while (divisor <= num);
	if (divisores == 2) {
		cout << "es primo.";
	}
	else {
		cout << "no es primo.";
	}
	return 0;
}
