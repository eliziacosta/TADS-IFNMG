//Escreva um programa que indique o número de dias existentes em um mês.
#include<iostream>
#include<locale.h>
using namespace std;
int main(){
	setlocale(LC_ALL,"portuguese");
	int mes;
	cout<<"Digite o numero referente ao mes"<<endl;
	cin>>mes;
	
	switch(mes){
		case 2:
			cout<<"28 dias";
			break;
			
		case 4:
		case 6:
		case 9:
		case 11:	
			cout<<"30 dias";
			break;
			
		case 1:
		case 3:
		case 5:
		case 7:	
		case 8:
		case 10:
		case 12:
		    cout<<"31 dias";
			break;	
					
		default:
		    cout<<"mes invalido";
			break;	
	}
	return 0;
}
