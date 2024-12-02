/*Desenvolva um programa em C++ para simular um sistema de menu de
restaurante. O programa deve exibir um menu principal com diferentes op��es, sendo elas:
pratos principais, bebidas, sobremesas usando switch case. Cada op��o selecionada deve
exibir um submenu correspondente. Exemplo para pratos principais: strogonoff, feijoada,
risoto.*/
#include<iostream>
#include<locale.h>
using namespace std;
int main(){
	setlocale(LC_ALL,"portuguese_brazil");
	int menu ;
	cout<<"[1] Pratos principais"<<endl
	    <<"[2] Bebidas"<<endl
	    <<"[3] Sobremesas"<<endl;
	cin>>menu;
	
	switch(menu){
		case 1:
		    cout<<"Strogonoff"<<endl
		        <<"Feijoada"<<endl
			    <<"Risoto"<<endl;
			break;
			
		case 2:
		   cout<<"Suco"<<endl
		       <<"Refrigerante"<<endl
			   <<"Vinho"<<endl;
			break;
			
		case 3:
			cout<<"Pudim"<<endl
			    <<"mousse"<<endl
				<<"bolo"<<endl;
			break;
			
		default:
		cout<<"op��o invalida";
		break;		   	    
	}    
    return 0;	
}
