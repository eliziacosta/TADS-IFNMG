/*Crie um algoritmo que leia as notas e idade de 30 alunos de 5 turmas diferentes e:
a) contabilize o total de alunos aprovados e reprovados.
b) contabilize o total de alunos menores de idade que foram reprovados. c) calcule a
média de reprovação.
d) calcule a média de aprovação.

e) para medir o percentual de nota de uma escola, é feita a soma de todas as notas dos alunos,
após isso, divide-se a nota do aluno por 15.5 ( um número específico calculado pela instituição).
Mostre este resultado.*/
#include<iostream>
#include<locale.h>
using namespace std;
int main(){
	setlocale(LC_ALL,"portuguese");
	int idade, nAprovado=0,nReprovado=0,meIdade=0;
	float nota, meReprovado=0,meAprovado=0,notaTot=0,total=0,quantAluno=0;
	
	for(int i=0; i<5; i++){
		cout<<"Turma "<<i+1<<endl;
		
		for(int j=0; j<30; j++){
			
			
		    cout<<"digite a idade: "<<endl;
		    cin>>idade;
		    
			cout<<"Digite a nota: "<<endl;
			cin>>nota;
			
			notaTot= notaTot+nota;
            quantAluno=quantAluno+1;
            
			if(nota>=60){
				 nAprovado = nAprovado +1;
			
			}
			else{
				nReprovado= nReprovado+1;
		
			    
			if(idade>0 && idade<18){
				meIdade=meIdade+1;
			}
        }
			
		}	
	}
	meAprovado=(nAprovado/quantAluno)*100;
	meReprovado=(nReprovado/quantAluno)*100;
	total=notaTot/15.5;
	
	cout<<"Sao "<<nAprovado<<" Aprovados"<<endl;
	cout<<"Sao "<<nReprovado<<" Reprovados"<<endl;
	cout<<"Sao "<<meIdade<<" Menor de idade reprovado"<<endl;
	cout<<"Media reprovacao : "<<meReprovado<<" % "<<endl;
    cout<<"Media aprovacao: "<<meAprovado<<" % "<<endl;
    cout<<"percentual de nota: "<<total<<" % "<<endl;
    
	return 0;
}
