#include<iostream>
#include<locale.h>
using namespace std;
int main(){
	setlocale(LC_ALL,"portuguese");
	int idade,num,idade1=0;
	float peso,altura,cont=0,cont1=0,cont2=0,cont3=0,media=0.0,porcentagem;
	
	cout<<"Digite o numero de pessoas: "<<endl;
	cin>>num;
	
	for(int i=0;i<num;i++){
		cout<<"digite a idade da pessoa "<<i+1<<endl;
		cin>>idade;
		idade1=idade1+idade;
		cont++;
		
		cout<<"digite a altura da pessoa "<<i+1<<endl;
		cin>>altura;
	
		cout<<"digite o peso da pessoa "<<i+1<<endl;
		cin>>peso;
		
		if(peso>90 && altura<1.50){
				cont1++;	
		}
		if(idade>=10 && idade<=30){
			cont2++;
		}
		if(altura>1.90){
			cont3++;
		}
		porcentagem=0.0;
		if(cont3>0){
		porcentagem=(cont2/cont3)*100;
			
		}
		
	}
	media=idade1/num;
	
	cout<<"A media das idades e: "<<media<<endl;
	cout<<"A quantidade de pessoas com peso superior a 90kg e altura inferior a 1m50cm e: "<<cont1<<endl;
	cout<<"A porcentagem e: "<<porcentagem<<" %"<<endl;
	return 0;
}
