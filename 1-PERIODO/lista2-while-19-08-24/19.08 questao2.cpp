/*Escreva um programa em C++ que solicite ao usuário para inserir números. Utilize o
loop do...while para continuar pedindo números e somando-os até que o usuário insira
o valor zero. Após o loop, calcule e exiba a média dos números inseridos (excluindo o
zero).*/
#include<iostream>
using namespace std;
int main(){
	float num=0,soma=0,cont=0,media=0;
	
	do{
	cout<<"digite um numero: "<<endl;
	cin>>num;

	soma=soma+num;
	cont++;
		
	}while(num> 0);
    
	media=soma/(cont-1);
	
	cout<<"a soma e: "<<soma<<endl;
	cout<<"a media e: "<<media;
	return 0;
}
