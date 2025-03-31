#include <iostream>
using namespace std;
int conta(int n, int k) {
    if (n == 0) { 
        return 0;
    } else {
       
        if (n%10 ==k) {
            return 1 + conta(n/10,k);
        } else {
            return conta(n/10,k); 
        }
    }
}
int main() {
    int n, k;
    cout << "Digite o numero natural: ";
    cin >> n;
    cout << "Digite o digito que deseja contar: ";
    cin >> k;

    int resultado = conta(n,k);

   
    cout << "O digito ocorreu " <<resultado<< endl;

    return 0;
}
