#include <iostream>
using namespace std;

int main() {
    int n = 4; 
    int arr[n] = {1, 2, 3, 4};

    int somaPares = 0; 
    int somaElementos = 0;

  
    for (int i = 0; i < n; i++) { 
        for (int j = 0; j < n; j++) { 
            somaPares += arr[i] + arr[j]; 
        }
    }

    for (int i = 0; i < n; i++) {
        somaElementos += arr[i]; 
    }

    cout << "A soma dos produtos dos pares é: " << somaPares << endl;
    cout << "A soma dos elementos é: " << somaElementos << endl;

    return 0;
}
