#include <iostream>

using namespace std;

int main() {
	
	int x,y;
	
	cout << ++(x+y);
	/*
	Problablemente quería hacer:
	cout << (++x + ++y)
	*/
	
	return 0;
}
