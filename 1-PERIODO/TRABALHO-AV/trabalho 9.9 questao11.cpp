#include <iostream>
#include<locale.h>
using namespace std;
int main() {
	setlocale(LC_ALL,"portuguese");
    int nume = 252;  // (aqui a gente escolhe o valor do numero magico)
    int tenta, cont = 0;

    cout << "Adivinhe o numero magico entre 0 e 500." << endl;

    do {
        cout << "Digite o seu palpite: ";
        cin >> tenta;
        cont++;

        if (tenta > nume) {
            cout << "Tentativa maior que o numero magico, digite novamente." << endl;
        } else if (tenta < nume) {
            cout << "Tentativa menor que o numero magico, digite novamente." << endl;
        } else {
            cout << "Parabens, voce acertou!" << endl;
        }
    } while (tenta != nume);

    cout << "Numero de tentativas: " << cont << endl;

    if (cont >= 1 && cont <= 3) {
        cout << "muito sortudo" << endl;
    } else if (cont >= 4 && cont <= 6) {
        cout << "sortudo" << endl;
    } else if (cont >= 7 && cont <= 10) {
        cout << "normal" << endl;
    } else {
        cout << "Tente novamente!" << endl;
    }

    return 0;
}
