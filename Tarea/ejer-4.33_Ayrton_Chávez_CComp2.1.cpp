#include <iostream>

using namespace std;

int main () {
	int d, e, f;

	cout << "Escribe 3 medida de angulos de un triangulo y te dire cual es.... \n" <<endl;
	
	cout << "Lado A : " <<endl; 
	cin >> d;
	
	cout << "Lado B : " <<endl; 
	cin >> e;
	
	cout << "Lado C : " <<endl; 
	cin >> f;

	if(d == e && d == f)
	{
		cout << "\nSon medidas de un triangulo Equilatero"<<endl;
	}
	else if(d == e || d == f || e == f)
	{
		cout << "\nSon medidas de un triangulo Isosceles"<<endl;
	}
	else if(d != e && d != e && e != f)
	{
		cout << "\nSon medidas de un triangulo Escaleno"<<endl;
	}
	return 0;
}
