/*Um funcionario de uma empresa recebe aumento salarial anualmente. Sabe-se que este
funcionário:
a) foi contratado em 1995, com salário inicial de R$ 1000,00.
b) em 1996 recebeu um aumento de 1,5% sobre seu salário inicial.
c) a partir de 1977 ( inclusive ) os aumentos salariais sempre corresponderam ao dobro
do percentual do ano anterior.
Crie um programa que determine o salário atual desse funcionário.*/
#include<iostream>
using namespace std;
int main(){
    int anoContratacao = 1995;
    int anoAtual = 2024; 
    double salario = 1000.0;
    double aumento = 1.5 / 100; 
    double atual = salario;

    for (int i = 1996; i <=atual;i++) {
        atual +=atual * aumento;
        aumento *= 2; 
    }

    cout << "O salário atual do funcionário em " << anoAtual << " é " << atual <<endl








    return 0;
}