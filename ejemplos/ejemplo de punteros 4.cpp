#include <iostream>

using namespace std;

int* funcion() {
	int x = 20;
	return &x;
}

int main() {
	
	int *ptr = funcion();
	
	cout << *ptr << endl;
	
	return 0;
}
