/*Desenvolva um sistema bancário simples em C++. O programa deve permitir
ao usuário realizar as seguintes operações usando switch case:
Consultar saldo, Depositar dinheiro, Sacar dinheiro
Para isso, você deve, inicialmente, conhecer o saldo do cliente. Com base no saldo, deve
permitir ou não o saque. Após as transações realizadas, você deve imprimir na tela o saldo
atualizado.*/
#include<iostream>
#include<locale.h>
using namespace std;
int main(){
	setlocale(LC_ALL,"portuguese");
	int opc;
	float saldo,valor1,valor;
	
	cout<<"digite seu saldo"<<endl;
	cin>>saldo;
	
	cout<<"Escolha uma opção: "<<endl
	    <<"[1] Consultar saldo"<<endl
	    <<"[2] Depositar dinheiro"<<endl
	    <<"[3] Sacar dinheiro"<<endl;
	cin>>opc;

	switch(opc){
		case 1:
			cout<<"Seu saldo é: "<<saldo<<endl;
			break;
			
		case 2:
			cout<<"Quanto deseja depositar? "<<endl;
			cin>>valor1;
			valor=valor1+saldo;
			cout<<"Seu novo saldo é: "<<valor<<endl;
			break;
		
		case 3:
		   cout<<"Quanto deseja sacar? "<<endl;
		   cin>>valor1;
		   
		   if(saldo>=valor1){
		   	valor=saldo-valor1;
		   	cout<<"Saque autorizado,seu novo saldo é: "<<valor<<endl;
		   }
		   else{
		   	cout<<"Saldo insuficiente"<<endl;
		   }
		   break;
		   
		default:
		cout<<"Opção invalida";
		break;   	
	} 
	return 0;
}
