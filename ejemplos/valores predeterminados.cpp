#include <string>
#include <iostream>
using namespace std;


int capturaNombre(string Nombre, string Apellido)
{
    cout << Nombre << " " << Apellido;
    return 0;
}
 
int main()
{
    capturaNombre("Jorge", "Ramirez");
    return 0; 
}

//int capturaNombre(string Nombre, string Apellido = "Pérez")
 int main()
{
capturaNombre("Jorge");
//salida: Jorge Pérez
return 0; 
}


