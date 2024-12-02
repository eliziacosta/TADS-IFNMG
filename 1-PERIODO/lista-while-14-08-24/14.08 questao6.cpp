#include<iostream>
#include<locale.h>
using namespace std;
int main(){
	setlocale(LC_ALL,"portuguese");
	int alunos,cont=0;
	float peso,soma=0,media;
	
	cout<<"Digite a quantidade de alunos na academia"<<endl;
    cin>>alunos;
    
    while(cont<alunos){
    	cout<<"digite o peso do aluno"<<endl;
    	cin>>peso;
    	soma=soma+peso;
    	cont++;
	}
    media=soma/alunos;
    cout << "A média de peso dos alunos é: " << media << " kg" << endl;
	return 0;
}
