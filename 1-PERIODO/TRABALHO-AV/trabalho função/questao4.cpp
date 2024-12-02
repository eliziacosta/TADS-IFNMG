/*Faça um programa que use a função valorPagamento para determinar o valor a ser pago por uma prestação de uma conta. O programa deverá solicitar ao usuário o valor da prestação e o número de dias em atraso e passar estes valores para a função valorPagamento, que calculará o valor a ser pago e devolverá este valor ao programa que a chamou. O programa deverá então exibir o valor a ser . Use o tipo void.*/
#include<iostream>
using namespace std;
void valorPagamento(float valorP,int dias){
     float multa,juros,tot;
     multa=valorP*0.03;
     juros=valorP*0.001*dias;
     tot=valorP+multa+juros;
     cout<<"valor: "<<tot<<endl;
}
int main(){
    float valorP;
    int dias;
    cout<<"digite o valor da prestacao: "<<endl;
    cin>>valorP;

    cout<<"digite o numero de dias em atraso: "<<endl;
    cin>>dias;

    valorPagamento(valorP,dias);


    return 0;
}