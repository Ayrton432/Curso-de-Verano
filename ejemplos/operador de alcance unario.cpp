#include <iostream>

using namespace std;

void bar(); // Esta es la funci�n global

class foo { 
    void some_func() { ::bar(); }   /* 
										Esta funcion est� llamando a la 
										global bar() y no al de la clase
    								*/
    								
    void bar();      // Este es un miembro de la clase 
}; 


