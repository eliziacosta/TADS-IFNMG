/*Faça um programa que leia um vetor de 8 posições e, em seguida, leia também dois valores X e Y
quaisquer correspondentes a duas posições no vetor. Ao final, seu programa deverá escrever a soma
dos valores encontrados nas respectivas posições X e Y .*/
#include<iostream>
using namespace std;
int main() {

    int vet[8];
    int x,y;

    cout <<"Digite 8 valores para o vetor:"<<endl;
    for (int i = 0; i < 8; i++) {
        cout<<"Posicao "<<i<<endl;
        cin>>vet[i];
    }
    
    cout<<"Digite a posicao x(entre 0 e 7) ";
    cin>>x;
    cout<<"Digite a posicao y(entre 0 e 7)";
    cin>>y;

    if(x >= 0 && x < 8 && y >= 0 && y < 8){
        int soma = vet[x] + vet[y];
        cout << "A soma dos valores nas posicoes e: " << soma << endl;
    } 
	else {
        cout << "As posicoes devem estar entre 0 e 7." << endl;
    }

    return 0;
}
