#include <iostream>

using namespace std;

int main(){
	
	int x=15,y=5;
	
	if (y < 10)
	if (x > 10)
		cout << " XxXxX " << endl;
	else
		cout << " YxYxY " << endl;
		cout << " OoOoO " << endl;
		/*
			Si x es igual a 5 y y es igual a 15 devuelve
			OoOoO
			Si x es igual a 15 y y es igual a 5, devuelve
			XxXxX
			OoOoO		
		*/
	
	if (y < 10)
	{
		if (x > 10)
			cout << " XxXxX " << endl;
	}
	else
	{
		cout << " YxYxY " << endl;
		cout << " OoOoO " << endl;
		
		/* Si x es 5 y y es 15, devuelve
			YxYxY
			OoOoO
			si x es 15 y y es 5, devuelve
			XxXxX
		*/
	}
	return 0;
}
