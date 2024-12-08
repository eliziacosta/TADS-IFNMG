#include <iostream>
using namespace std;

int main() {
    int n = 4; 
    int vet[n] = {1, 2, 3, 4}; 

    int soma = 0;

    for (int i = 0; i < n; i++) { 

        for (int j = 0; j < n; j++) {

            soma += vet[i] + vet[j]; 
        }
    }

    cout << "A soma dos produtos de todos os pares é: " << soma << endl;

    return 0;
}










