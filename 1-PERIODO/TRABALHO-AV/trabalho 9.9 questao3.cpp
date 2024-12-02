#include<iostream>
#include<locale.h>
using namespace std;
int main(){
	setlocale(LC_ALL,"portuguese");
	int opc;
	float nota1,nota2,tot,nota3,peso1,peso2,peso3;
	
	cout<<"Escolha uma opcao"<<endl
	    <<"[1] Media Aritmetica"<<endl
	    <<"[2] Media Ponderada"<<endl
	    <<"[3] Sair do programa"<<endl;
	cin>>opc;
	if(opc==1){
		cout<<"Digite duas notas: "<<endl;
		cin>>nota1>>nota2;
		tot=(nota1+nota2)/2;
		cout<<"A Media Aritmetica e: "<<tot<<endl;
		
	}
	else if(opc==2){
		cout<<"digite a nota 1: "<<endl;
		cin>>nota1;
		cout<<"digite o peso da nota 1: "<<endl;
		cin>>peso1;
		cout<<"digite a nota 2: "<<endl;
		cin>>nota2;
		cout<<"digite o peso da nota 2: "<<endl;
		cin>>peso2;
		cout<<"digite a nota 3: "<<endl;
		cin>>nota3;
		cout<<"digite o peso da nota 3: "<<endl;
		cin>>peso3;
		tot=(nota1*peso1+nota2*peso2+nota3*peso3)/(peso1+peso2+peso3);
		cout<<"A media ponderada e: "<<tot<<endl;	
	} 
	else if(opc==3){
		cout<<"Saindo do programa..."<<endl;
	}   
	else{
		cout<<"Opcao invalida."<<endl;
    }
	
	return 0;
}
