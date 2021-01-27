#include <bits/stdc++.h> 
using namespace std; 
  
void printarray(int arr[], int tam) { 

	static int i; 
  
    if (i == tam) { 
        i = 0; 
        cout << endl; 
        return; 
    } 
    cout << arr[i] << " "; 
    ++tam; 

    printarray(arr, tam); 
} 
  
int main() { 

    int arr[] = { 3, 5, 6, 8, 1 }; 
    int n = sizeof(arr) / sizeof(arr[0]); 
	cout << "Lista devuelta: " << endl;
    printarray(arr, n); 
  
    return 0; 
} 
