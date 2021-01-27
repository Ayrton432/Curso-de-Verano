#include <iostream>
#include <cmath>

using namespace std;

class Punto {
	private:
		double x, y;
		
	public:
		Punto(int x1, int y1){ 
			x = x1; 
			y = y1; 
		}
		double getx(){
			return x;
		}
		double gety(){
			return y;
		}
};

double distancia(Punto p1, Punto p2)
{
	return sqrt((pow(p2.getx() - p1.getx(), 2)) + (pow(p2.gety() - p1.gety(), 2)));
}

int main() {
	
	Punto p1(4, 8);
	Punto p2(5, 2);
	
	cout << "Los 2 puntos son (x1,y1) y (x2, y2) : \n";

	cout << "\nEl valor de x1 es: " << p1.getx() << endl;
	cout << "\nEl valor de y1 es: " << p1.gety() << endl;
	cout << "\nEl valor de x2 es: " << p2.getx() << endl;
	cout << "\nEl valor de y2 es: " << p2.gety() << endl;
	
	cout << "\nLa distancia entre los 2 puntos es: " << distancia(p1,p2) ;
       
	return 0;
} 



