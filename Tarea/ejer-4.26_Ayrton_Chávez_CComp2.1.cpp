#include <iostream>

using namespace std ;

int main ()
{
   int n ;
   char Simbolo = ' * ' ;
   
   cout << " Introduzca un numero : " << endl;
   cin >> n ;
   
   for (int j = 0; j < n ; ++j) {
      for (int i = 0; i < n ; ++i) {
         cout << Simbolo;
      }
      cout << endl;
   }
   return 0;
}
