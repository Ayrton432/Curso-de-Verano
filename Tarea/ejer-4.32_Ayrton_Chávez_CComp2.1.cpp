#include <iostream>

using namespace std;

int main() {
	
	int x,y;
	
	cout << ++(x+y);
	/*
	Problablemente quer�a hacer:
	cout << (++x + ++y)
	*/
	
	return 0;
}
