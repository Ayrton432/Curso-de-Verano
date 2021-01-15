#include <iostream>

using namespace std;

int main(){	
	//int a = 999999999;
	short a = 4294967295;
	//a = a + 1
	//int a = 10;
	//short a = 10;
	//short a = 65535;
	//unsigned short a = 65535;
	//short  int{long}  long long
	
	//La funcio sizeof me retorna el tamaño de la variable en memoria
	cout << sizeof(a) <<endl;
	cout << a << endl;
	//Esta me imprimirá 4, lo que significa que un INT ocupa y bytes en memoria
	/*
		11111111 11111111
	
	*/
	
	return 0;
}
