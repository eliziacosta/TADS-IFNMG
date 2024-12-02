/*Escreva um programa que leia 10 números inteiros e os armazene em um vetor. Imprima o vetor, o
maior elemento e a posição que ele se encontra*/
#include<iostream>
#include<locale.h>
using namespace std;
int main() {
	setlocale(LC_ALL,"portuguese");
    int vet[10];
    int maior, posicao;

    cout << "Digite 10 n�meros inteiros:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << "N�mero " << i <<endl;
        cin >> vet[i];
    }

    maior = vet[0];
    posicao = 0;
    
    for (int i = 1; i < 10; i++) {
        if (vet[i] > maior) {
            maior = vet[i];
            posicao = i;
        }
    }
    
    for (int i = 0; i < 10; i++) {
        cout <<"Vetor: "<<vet[i]<<endl;
    }

    cout << "O maior n�mero �: " << maior << endl;
    cout << "Sua posi��o �: " << posicao << endl;

    return 0;
}

