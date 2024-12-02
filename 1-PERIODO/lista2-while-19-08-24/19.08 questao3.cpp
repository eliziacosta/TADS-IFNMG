/*Crie um programa que leia por 7 vezes o valor da base e do expoente, mostre o valor
da potência encontrada de acordo com os números recebidos. Pode usar o pow!*/
#include<iostream>
#include<math.h>
using namespace std;
int main(){
	float base=0,expoente=0,tot=0;
	int i=0;
	
	do{
	   cout<<"Digite a base: "<<endl;
	   cin>>base;
	   
	   cout<<"Digite o expoente: "<<endl;
	   cin>>expoente;
	   
	   tot=pow(base,expoente);
	   
	   cout<<"o resultado e: "<<tot<<endl;
	   i++;
	   
	}while(i<7);
	
	return 0;
}
