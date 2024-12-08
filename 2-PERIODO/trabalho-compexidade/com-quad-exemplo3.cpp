#include <iostream>
using namespace std;

int main() {
    int n = 4; // Tamanho do array
    int matrix[n][n]; // Matriz de tamanho n x n

    // Preenchendo a matriz (O(n^2) temporal)
    for (int i = 0; i < n; i++) { 
        for (int j = 0; j < n; j++) { 
            matrix[i][j] = i + j; // Atribuindo valores para cada célula
        }
    }

    // Soma de todos os elementos da matriz (O(n^2) temporal)
    int soma = 0;
    for (int i = 0; i < n; i++) { 
        for (int j = 0; j < n; j++) { 
            soma += matrix[i][j]; // Somando os valores
        }
    }

    cout << "Soma de todos os elementos da matriz: " << soma << endl;

    return 0;
}
