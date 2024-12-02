#include<iostream>
#include<locale.h>
using namespace std;
int main(){
	setlocale(LC_ALL, "portuguese");
	int nume, cont=0, cont1=0, cont2=0, cont3=0;
	
	while( nume>=0){
		cout<<" Digite um numero: "<<endl;
	cin>>nume;
		if( nume>=0 && nume<=25){
			cont++;
		}
	else if( nume>=26 && nume<=50){
			cont1++;
		}
	else if( nume>=51 && nume<=75){
			cont2++;
		}
	else if( nume>=76 && nume<=100){
			cont3++;
		}
	}
	cout<<" nos intervalos de 0 a 25 estão: "<<cont<<" numeros. "<<endl;
	cout<<" nos intervalos de 26 a 50 estão: "<<cont1<<" numeros. "<<endl;
	cout<<" nos intervalos de 51 a 75 estão: "<<cont2<<" numeros. "<<endl;
	cout<<" nos intervalos de 76 a 100 estão: "<<cont3<<" numeros. "<<endl;
	return 0;
}
