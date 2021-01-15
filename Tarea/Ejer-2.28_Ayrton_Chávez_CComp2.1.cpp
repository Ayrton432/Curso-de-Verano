#include <iostream>
using namespace std;
int main()
{
	int num, inv;
	cout << "Ingresa un numero: " << endl;
	cin >> num;
	
	cout << "El numero invertido es: " << endl;
	while (num != 0)
	{
		inv = num % 10;
		cout << inv << "  ";
		num /= 10;
	}
	return 0;
}
