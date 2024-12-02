//Escreva um programa que leia o codigo de um determinado produto e mostre
//a sua classificacaoo. Utilize a tabela abaixo como referencia:
#include<iostream>
#include<locale.h>
using namespace std;
int main(){
	setlocale(LC_ALL,"portuguese");
	int cod;
	cout<<"digite um codigo"<<endl;
	cin>>cod;
	switch(cod){
		case 1:
			cout<<"Alimento nao perecivel";
			break;	
		case 2:
		    cout<<"Alimento perecivel";
		    break;
		case 3:
			cout<<"Vestuario";
			break;
		case 4:
			cout<<"Limpeza";
			break;
			
		default:
		cout<<"codigo invalido";
		break;	
						
	}
	    
	return 0;
}
