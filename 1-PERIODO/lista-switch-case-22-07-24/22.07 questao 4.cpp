#include<iostream>
#include<locale.h>
using namespace std;
int main(){
	setlocale(LC_ALL,"portuguese");
	int cod,quant;
	float valor;
	cout<<"Digite o código do lanche:"<<endl
	    <<"[100] Cachorro quente"<<endl
	    <<"[101] Bauru simples"<<endl
	    <<"[102] Bauru com ovo"<<endl
	    <<"[103] Hamburguer"<<endl
	    <<"[104] Cheeseburguer"<<endl
	    <<"[105] Refrigerante"<<endl;
	cin>>cod;
	
	cout<<"Digite a quantidade de lanches"<<endl;
	cin>>quant;
	
	switch(cod){
		case 100:
		 valor= 1.70*quant;
		 cout<<"O valor a ser pago é: "<<valor;
		 break;
		 
		case 101:
		 valor= 2.30*quant;
		 cout<<"O valor a ser pago é: "<<valor;
		 break;
		 	
		case 102:
		 valor=	2.60*quant;
		 cout<<"O valor a ser pago é: "<<valor;
		 break;
		 
		case  103:
		 valor= 2.40*quant;
		 cout<<"O valor a ser pago é: "<<valor;
		 break;
		 
		case 104:
		 valor= 2.50*quant;
		 cout<<"O valor a ser pago é: "<<valor;
		 break;
		 
		case 105:
		 valor= 1.00*quant;
		 cout<<"O valor a ser pago é: "<<valor;
		 break;
		 
		 default:
		 cout<<"código invalido";   
	}
	
	return 0;
}
