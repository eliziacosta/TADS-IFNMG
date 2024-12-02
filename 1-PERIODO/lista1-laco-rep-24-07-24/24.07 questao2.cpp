/*Numa eleição existem três candidatos. Faça um programa que peça o
número total de eleitores. Peça para cada eleitor votar e ao final mostrar o
número de votos de cada candidato.*/
#include<iostream>
#include<locale.h>
using namespace std;
int main(){
	setlocale(LC_ALL,"portuguese");
	
	int qtde=0;
	int voto,qtd1,qtd2,qtd3;
	
	cout<<"[1] para Afonso, [2] para Pedro, [3] para arthur"<<endl;
	

	cout<<"Digite a quantidade de eleitores"<<endl;
	cin>>qtde;
	
	for(int i=0; i<qtde ;i++ ){
		cout<<"digite seu voto"<<endl;
		cin>>voto;
		
		if(voto==1){
			qtd1=qtd1+1;
		}
		else if(voto==2){
			qtd2=qtd2+1;
		}
		else {
			qtd3=qtd3+1;
		}
		
	}
	    cout<<"Candidato 1 "<<qtd1<<" votos"<<endl
		    <<"Candidato 2 "<<qtd2<<" votos"<<endl
		    <<"Candidato 3 "<<qtd3<<" votos"<<endl;
	
	
	return 0;
}
