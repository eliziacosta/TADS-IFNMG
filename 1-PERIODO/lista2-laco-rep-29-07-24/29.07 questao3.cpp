#include<iostream>
using namespace std;
int main (){
	
	int idade,cont=0,total=0,contP=0;
	float porc,peso,altura,media,soma=0,mediaA,somaA;
	
	for(int i=0 ; i<5; i++){
		for(int j=0;j<11;j++){
			cout<<"digite a idade: "<<endl;
			cin>>idade;
			cout<<"peso: "<<endl;
			cin>>peso;
			cout<<"altura "<<endl;
			cin>>altura;
			total++;
			soma=soma+idade;
			somaA=somaA+altura;
			if(idade<18){
				cont++;
			}
			if(peso>80){
				contP++;
			}
		}
	}
	
	mediaA=somaA/total;
	media=soma/total;
	porc=(contP/total)*100;
	
	
	
	return 0;
}
