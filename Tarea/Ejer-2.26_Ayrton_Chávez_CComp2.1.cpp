//Ejercicio 2.26 del capitulo 2
#include <iostream>

using namespace std;

int main () {
	
	int  N = 8, i, j;
	char c1 = '*', c2 = ' ';

	for (  i = 0; i < N; i++ )
	{
		for (  j = 0; j < 16; j++ )
		{
			cout << ( ( i + j ) % 2 == 0 ? c1 : c2 );
		}
		cout << endl;
	}
	return 0;
}
