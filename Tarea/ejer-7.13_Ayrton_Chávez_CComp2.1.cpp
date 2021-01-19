#include <iostream>
using namespace std;


int main( void )
{
	const int max = 20;  
	int a[max] = {0}; 
    int i; 
    int j; 
    int k = 0; 
    int duplicate; 
    int value; 

    cout << "Ingrese 20 numeros que esten entre el 10 y el 100" << endl;
    for ( i = 0; i <= max - 1; i++ ) {
        duplicate = 0;
        cin >> value;

         
		if ( value >= 10 && value <= 100 ) {
            for ( j = 0; j < k; j++ ) {
            	if ( value == a[j] ) {
                	duplicate = 1;
					cout << "Numero duplicado";
                	break;
            	} 
        	} 
            if ( !duplicate ) {
		    	a[k++]  = value;
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
