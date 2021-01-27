#include <iostream>
#include <bits/stdc++.h> 

using namespace std;  
  
void intercambio(int* a, int* b) {  
    int t = *a;  
    *a = *b;  
    *b = t;  
}  
  
int particion(int arr[], int menor, int mayor) {  
    int pivot = arr[mayor];   
    int i = (menor - 1); 
  
    for (int j = menor; j <= mayor - 1; j++) {  
        if (arr[j] < pivot) {  
            i++; 
            intercambio(&arr[i], &arr[j]);  
        }  
    }  
    intercambio(&arr[i + 1], &arr[mayor]);  
    return (i + 1);  
}  
  
void quickSort(int arr[], int menor, int mayor) {  
    if (menor < mayor) {  
        int pi = particion(arr, menor, mayor);  
        quickSort(arr, menor, pi - 1);  
        quickSort(arr, pi + 1, mayor);  
    }  
}  
  
void printArray(int arr[], int tam) {  
    int i;  
    for (i = 0; i < tam; i++)  
        cout << arr[i] << " ";  
    cout << endl;  
}  
  
int main() {  
    int arr[] = {10, 7, 8, 9, 1, 5};  
    int n = sizeof(arr) / sizeof(arr[0]);
    
    cout << "Matriz sin ordenar" << endl;
	printArray(arr, n); 
    quickSort(arr, 0, n - 1);  
    
    cout << "\nMatriz ordenada" << endl; 
    printArray(arr, n);  
    return 0;  
}  
  
