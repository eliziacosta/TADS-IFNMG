//Dada uma letra, escreva na tela se essa letra é uma vogal ou consoante.
#include<iostream>
#include<locale.h>
using namespace std;
int main(){
	setlocale(LC_ALL,"portuguese");
	char letra;
	cout<<"Digite uma letra"<<endl;
	cin>>letra;
	
	switch(letra){
		case'a':
	    case'e':
	    case'i':
	    case'o':
	    case'u':
	      cout<<"vogal";
		  break;
	
	    default:
		cout<<"consoante";
		break;	       
	}
	return 0;
}
