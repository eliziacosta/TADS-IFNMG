#include <iostream>
using namespace std;
int main() {
    int num;
    float fatorial = 1;

    cout << "Digite um numero inteiro e positivo: ";
    cin >> num;

    for (int i = 1; i <= num; i++) {
        fatorial *= i;
    }

    cout << "O fatorial de " << num << " e " << fatorial << "." <<endl;


    return 0; 
}

