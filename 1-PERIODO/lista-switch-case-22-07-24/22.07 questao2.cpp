/*Crie um programa em C++ que funcione como um conversor de unidades
simples. O programa deve exibir um menu com diferentes opções de conversão: metros
para centímetros, quilogramas para gramas, horas para minutos usando switch case. Após
a escolha da conversão, o programa deve solicitar ao usuário o valor a ser convertido e
exibir o resultado.*/
#include<iostream>
#include<locale.h>
using namespace std;
int main(){
	setlocale(LC_ALL,"portuguese");
	int conv;
	float valor,valor1;
	cout<<"[1] metros para centímetros"<<endl
	    <<"[2] quilogramas para gramas"<<endl
	    <<"[3] horas para minutos"<<endl;
	cin>>conv;
	
	cout<<"Digite o valor a ser convertido"<<endl;
	cin>>valor1;
	    
	switch(conv){
		case 1:
		 valor =valor1*100;
		 cout<<"resultado: "<<valor<<" centímetros";
		 break;
		
		case 2:
		 valor=valor1*1000;
		 cout<<"resultado: "<<valor<<" gramas";
		 break;
		 
		case 3:
		 valor=valor1*60;
		 cout<<"resultado: "<<valor<<" minutos";
		 break;
		
		default:
			cout<<"opção invalida";
			break;
		
	}
	return 0;
}
