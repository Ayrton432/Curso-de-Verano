#include <iostream>
# include <cmath>
# include <iomanip>

using namespace std;
using std::setw;
   
class Punto 
{
	float x1, x2, y1, y2, distancia;
	double distancia(float&, float&, float&, float&);
};
   
double Punto::distancia(float&, float&, float&, float&) {
	
	cout <<"\nLa distancia entre los puntos es: " <<setw(10)<< distancia << endl;
	distancia = sqrt((x1 - y1)*(x1 - y1) + (x2 - y2)*(x2 - y2));
}
int main() {  
            
	Punto res;
	res.distancia(x1&, x2&, y1&, y2&);
	
	cout <<"\nIntroduzca las coordenadas del primer punto: "<< endl;
	cin >> x1 >>  x2;

	cout <<"\nIntroduzca las coordenadas del segundo punto: " << endl;
	cin >> y1 >>  y2;
	
	
	
	

	return 0;
}
