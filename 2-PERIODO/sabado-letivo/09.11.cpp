//Implemente uma função recursiva que verifique se um número é primo.
#include <iostream>
using namespace std;
int primo(int num, int cont = 2) {
    if (num <= 1) {
        return 0;
    }
    if (cont == num) {
        return 1;  
    }
    if (num % cont == 0) {
        return 0; 
    }
    return primo(num, cont + 1);  
}

int main() {
    int num;
    cout << "Digite um numero: ";
    cin >> num;

    if (primo(num)) {
        cout <<"E primo"<< endl;
    } else {
        cout <<"Nao e primo"<< endl;
    }

    return 0;
}
