/*Crie uma função que receba um valor em reais e a cotação atual do dólar, e retorne o valor convertido para dólares.*/
#include<iostream>
using namespace std;
float dolar(float reais, float cotacao){

   return reais*cotacao;
}
int main(){
    float reais,cotacao,tot;
    cout<<"Digite em reais o valor que quer converter: "<<endl;
    cin>>reais;

    cout<<"Digite a cotacao atual do dolar: "<<endl;
    cin>>cotacao;
    
    tot=dolar(reais,cotacao);
    cout<<"O valor em dolares e: "<<tot<<endl;


    return 0;
}