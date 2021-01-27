#include <iostream>
using namespace std;

int main( void )
{
	const int max = 20;  
	int a[max] = {0}; 
    int i, j, k = 0;  
    int duplicado, val;  

    cout << "Ingrese 20 numeros que esten entre el 10 y el 100" << endl;
    for ( i = 0; i <= max - 1; i++ ) {
        duplicado = 0;
        cin >> val;

         
		if ( val >= 10 && val <= 100 ) {
            for ( j = 0; j < k; j++ ) {
            	if ( val == a[j] ) {
                	duplicado = 1;
					cout << "Numero duplicado";
                	break;
            	} 
        	} 
            if ( !duplicado ) {
		    	a[k++]  = val;
            } 
		} 
		else
			cout << "Numero invalido" << endl;

    } 

    cout << "Los valores sin repetir son: ";
    for ( i = 0; a[i] != 0; i++ ) {
        cout << a[i] << ", ";
    } 

    cout << endl;

return 0; 

} 	
