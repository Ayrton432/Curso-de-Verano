#include<iostream>

using namespace std;

void print(int *array, int size) {
   for(int i = 0; i < size; i++)
    	cout << array[i] << " ";
	cout << endl;
}
void insertionSort(int *array, int size) {
	int key, j;
	for(int i = 1; i<size; i++) {
    	key = array[i];
    	j = i;
    	while(j > 0 && array[j - 1] > key) {
        	array[j] = array[j - 1];
        	j--;
    	}
    	array[j] = key;   
	}
}

int main() {
   int n;
   cout << "Ingrese la cantidad de elementos: ";
   cin >> n;
   int arr[n];    
   cout << "Ingrese los numeros:" << endl;
   for(int i = 0; i<n; i++) {
      cin >> arr[i];
   }
   cout << "\nMatriz antes de ser ordenada: ";
   print(arr, n);
   insertionSort(arr, n);
   cout << "\nMatriz despues de ser ordenada: ";
   print(arr, n);
}
