/*Uma estatística realizada em 05 cidades brasileiras recuperou dados sobre os
acidentes de trânsito, você deve construir um algoritmo que:
a) Leia a quantidade de acidentes de trânsito no mês corrente de 05 cidades.
b) faça a média de acidentes de trânsito nestas cidades;
c) mostre a maior e a menor quantidade de acidentes informada p2or estas cidades.
#include<iostream>
using namespace std;*/
int main (){
	
	int qtda,menor=4000 ,maior=-1;
	float media,soma=0;
	
	for(int i=0;i<5;i++){
		
		cout<<"digite a quantidade: "<<endl;
		cin>>qtda;
		
		soma=soma+qtda;
		if(qtda>maior){
			maior=qtda;
		}
		if(qtda<menor){
			menor=qtda;
		}
		
	}
	media=soma/5;
	cout<<"a media de acidentes foi: "<<media<<endl;
	cout<<"menor: "<<menor<<endl;
	cout<<"maior: "<<maior<<endl;
	
	
	
	
	return 0;
}
