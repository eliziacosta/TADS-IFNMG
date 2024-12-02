/*Faça um programa que receba a temperatura média de cada mês do ano e armazene-as em uma lista.
Após isto, calcule a média anual das temperaturas e mostre todas as temperaturas acima da média
anual, e em que mês elas ocorreram (mostrar o mês por extenso: 1 – Janeiro, 2 – Fevereiro, . . . ).*/
#include<iostream>
using namespace std;
int main(){
    int vet[12];
    float media=0,soma=0;
    for (int i = 0; i < 12; i++) {
        cout<<"digite a temperatura media do mes "<<i+1<<endl;
        cin>>vet[i];
        soma=soma+vet[i];
    }
    media=soma/12;
    cout<<"a media e "<<media<<endl;

    for (int i = 0; i < 12; i++) {
        if (vet[i]>media){
            cout<<"mes "<<i+1<<" esta acima da media com "<<vet[1]<<endl;
        }
        
    }
   

    return 0;
}