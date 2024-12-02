/*Utilizando laço de repetição crie um algoritmo que faça o cálculo da potência de um número.*/
#include<iostream>
#include<locale.h>
using namespace std;
int main(){
	setlocale(LC_ALL,"portuguese");
	int base,expoente;
	int pot=1;
	cout<<"digite o expoente"<<endl;
	cin>>expoente;
	cout<<"digite a base"<<endl;
	cin>>base;
	
	for(int i=0; i<expoente; i++){
		pot*=base;
		
	}
	
	cout<<"A potencia sera: "<<res<<endl;
	
	return 0;
}
