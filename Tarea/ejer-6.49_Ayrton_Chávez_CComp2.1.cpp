#include <iostream>
using namespace std;

int tripleByValue(int num);
void tripleByReference(int &num);
int main()
{
	int num;
	
	cout << "Ingrese el numero deseado: " << endl;
	cin >> num;
	
	int result_by_val = tripleByValue(num);
	cout << "Retornar el paso por valor: " << result_by_val << endl;

	int result_by_ref = num;
	tripleByReference(result_by_ref);
	cout << "Retornar el paso por referencia: " << result_by_ref  << endl;

	return 0;
}

int tripleByValue(int num)
{
	return num * 3;
}
void tripleByReference(int &num)
{
	num = num * 3;
}

