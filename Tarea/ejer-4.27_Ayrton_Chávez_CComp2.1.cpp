#include <iostream>

using namespace std;

int main() {

    int num,p,s,c,m;
	
	cout << "ingrese un numero: " << endl;;

	cin >> num;

	p = num % 10;

	s = p / 10;

	c = s / 10;
	
	m = p * 100 + s * 10 + c;

	if (m = num)
		cout << "El numero es Palindromo" << endl;
	else
		cout << "El numero no es Palindromo" << endl;
	

	return 0;
}
