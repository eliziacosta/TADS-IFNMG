#include <iostream>
using namespace std;

int potencia(int base, int expoente) {
    if (expoente == 0) {
        return 1; 
    } else {
        return base * potencia(base, expoente - 1); 
    }
}

int main() {
    int base, expoente;
    
    cout << "Digite a base: ";
    cin >> base;
    
    cout << "Digite o expoente: ";
    cin >> expoente;
    
    int resultado = potencia(base, expoente);
    
    cout << "Resultado: " << resultado << endl;
    
    return 0;
}
