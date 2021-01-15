#include <iostream>

using namespace std;

int main(){	
	
	// char = character
	
	char a = 'a';
	/*char a = 'A';
	char a = 'Z';
	char a = 'z';
	char a = '1';
	char a = '9';
	*/
	
	//Tabla ASCII. Cada caracter tiene asociao un número.
	//Un casteo es una conversión de tipo
	//Estamos convirtiendo de char a int
	int valor = static_cast<int>(a);
	
	cout << valor << endl;
	cout << sizeof(a) << endl;
	
	return 0;
}
