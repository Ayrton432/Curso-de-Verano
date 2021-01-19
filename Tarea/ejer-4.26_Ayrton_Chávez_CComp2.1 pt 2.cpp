#include <iostream>

using namespace std ;

int main ()
{
   int n ;
   
   cout << " Introduzca el lado del cuadrado : " << endl;
   cin >> n ;
   
   for (short i = 0; i < n ; ++i) {
   		for (short j = 0; j < n ; ++j) {
    		if (i == 0 || j == 0 || i == n - 1 || j == n - 1 || i == n/2)
         		cout << "*";
      		else
    			cout << " ";
    	}
      cout << endl;
	}
   return 0;
}
