/*Desenvolva um sistema banc�rio simples em C++. O programa deve permitir
ao usu�rio realizar as seguintes opera��es usando switch case:
Consultar saldo, Depositar dinheiro, Sacar dinheiro
Para isso, voc� deve, inicialmente, conhecer o saldo do cliente. Com base no saldo, deve
permitir ou n�o o saque. Ap�s as transa��es realizadas, voc� deve imprimir na tela o saldo
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
	
	cout<<"Escolha uma op��o: "<<endl
	    <<"[1] Consultar saldo"<<endl
	    <<"[2] Depositar dinheiro"<<endl
	    <<"[3] Sacar dinheiro"<<endl;
	cin>>opc;

	switch(opc){
		case 1:
			cout<<"Seu saldo �: "<<saldo<<endl;
			break;
			
		case 2:
			cout<<"Quanto deseja depositar? "<<endl;
			cin>>valor1;
			valor=valor1+saldo;
			cout<<"Seu novo saldo �: "<<valor<<endl;
			break;
		
		case 3:
		   cout<<"Quanto deseja sacar? "<<endl;
		   cin>>valor1;
		   
		   if(saldo>=valor1){
		   	valor=saldo-valor1;
		   	cout<<"Saque autorizado,seu novo saldo �: "<<valor<<endl;
		   }
		   else{
		   	cout<<"Saldo insuficiente"<<endl;
		   }
		   break;
		   
		default:
		cout<<"Op��o invalida";
		break;   	
	} 
	return 0;
}
