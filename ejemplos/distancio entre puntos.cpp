# include <iostream>
   # include <cmath>
   # include <iomanip>
 
   using namespace std;
   using std::setw;
   
   //////////////////////////////////////////////////////////////////////////////
   // PROTOTIPO DE FUNCION DISTANCIA
   //////////////////////////////////////////////////////////////////////////////
   
   float distance(float, float, float, float);
 
   //////////////////////////////////////////////////////////////////////////////
   //FUNCION MAIN
   //////////////////////////////////////////////////////////////////////////////
   
   int main()
   {              /* Abre main */

   float x1, x2, y1, y2, distancia;
   
   cout <<"\n\nEste programa calcula la distancia entre dos puntos en el plano cartesiano. "<<endl;
   cout <<"\n\nIntroduzca las coordenadas del primer punto: "<<endl;
   cin >> x1 >>  x2;

   cout <<"\nIntroduzca las coordenadas del segundo punto: " <<endl;
   cin >> y1 >>  y2;

   distancia = sqrt((x1 - y1)*(x1 - y1 ) + (x2 - y2)*(x2 - y2));

   cout <<"\nLa distancia entre los puntos es: " << setw(10) <<distancia << endl;

   return 0;
   
   } 
