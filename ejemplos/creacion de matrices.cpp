#include <iostream>
#include <fstream>
//Programa de multiplicacion de dos matrices
using namespace std;
int main(){
//fichero de entrada

ifstream fin("mat.dat");
//fichero de salida
ofstream fout("matmult.dat");
//definicion lectura de dimension
int n,m, p,q;
float mat1[m][n],mat2[p][q],mat3[m][q];
//lectura de dimensiones y elementos de matrices y posterior escritura
//en pantalla
fin>>m>>n;
cout<<m<<" "<<n<<endl;
for(int i=0;i<m;i++){
for(int j=0; j<n;j++) fin>>mat1[i][j];
}
for(int i=0;i<m;i++){
for(int j=0;j<n;j++) cout<<mat1[i][j]<<" ";
cout<<endl;
}
cout<<endl;
cin>>p>>q;
cout<<p<<" "<<q<<endl;
for(int i=0;i<p;i++){
for(int j=0; j<q;j++) cin>>mat2[i][j];
}
for(int i=0;i<p;i++){
for(int j=0;j<q;j++) cout<<mat2[i][j]<<" ";
cout<<endl;
}
cout<<endl;
//Comprobacion de compatibilidad de dimensiones
if(n!=p){
cout<<" Dimensiones incorrectas. No se pueden multiplicar las matrices"<<endl;
return 0;
}
//Multiplicacion de matrices
for(int i=0;i<m;i++){
for(int j=0;j<q;j++){
mat3[i][j]=0;
for(int k=0; k<n;k++)
mat3[i][j]=mat3[i][j]+mat1[i][k]*mat2[k][j];
}
}
//Impresion del resultado
for(int i=0;i<m;i++){
//28 CAPÍTULO 2. VECTORES, MATRICES Y FUNCIONES
for(int j=0;j<q;j++){
cout<< mat3[i][j]<<" ";
}
cout<<endl;
}
for(int i=0;i<m;i++){
for(int j=0;j<q;j++){
cout<< mat3[i][j]<<" ";
}
cout<<endl;
}
fin.close();
fout.close();
return 0;
}
