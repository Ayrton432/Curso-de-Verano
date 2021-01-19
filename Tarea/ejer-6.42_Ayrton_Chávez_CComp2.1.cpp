#include <iostream>
#include <cmath>
using namespace std;

class Punto {
	public:
	int x1,x2,y1,y2;
	float distancia(int, int, int, int);
};


float Punto::distancia(int x1, int y1, int x2, int y2)
{
	float d;
	d = sqrt((pow(x2 - x1, 2)) + (pow(y2 - y1, 2)));
	return d;
}

int main() {
	
	int x1,x2,y1,y2;
	float r = 0;
	cout << "Los 2 puntos (x1,x2) & (y1,y2) : \n";

	cout << "Ingrese x1: "<< endl;
	cin >> x1;
  
	cout << "Ingrese x2: "<< endl;
	cin >> x2;
  
	cout << "Ingrese y1: "<< endl;
	cin >> y1;
  
	cout << "Ingrese y2: "<< endl;
	cin >> y2;
	
	Punto res;
	cout << "La distancia entre los 2 puntos es: " << res.distancia(x1,x2,y1,y2) ;
        return 0;
} 


