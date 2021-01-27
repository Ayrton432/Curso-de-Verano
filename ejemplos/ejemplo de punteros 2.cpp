#include<iostream>
using namespace std;

int main()
{
    float var = 33.66;  //Una variable cualquiera
    float *ptr_var = &var;  //Apuntando un puntero a la variable var
    
    cout<<"Valor de la variable var: "<<var<<endl;
    cout<<"Direccion de la variable var: "<<&var<<endl;
    cout<<"Valor de lo que hay almacenado en la direccion de memoria "<<ptr_var<<" : "<<*ptr_var<<endl;
    
    // Modificando el valor a través del puntero:
    *ptr_var = 100.25;
    cout<<"Valor de la variable var: "<<var<<endl;
    
    return 0;
}


