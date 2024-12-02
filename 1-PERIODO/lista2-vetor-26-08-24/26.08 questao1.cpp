/*Crie um programa que corrija automaticamente o gabarito de uma prova. Para isso, solicite ao
usuário que preencha um vetor de 5 posições, onde cada posição corresponde à resposta dada para
uma questão, variando de 'a' a 'e'. Esse vetor representará o cartão de respostas de um aluno. Em
seguida, leia um segundo vetor que contém as respostas corretas para cada questão. O programa
deve comparar as respostas fornecidas pelo aluno com o gabarito oficial e, ao final, calcular e exibir
o número total de acertos do aluno.*/
#include<iostream>
using namespace std;
int main(){
char vet[5],vet1[5];
int cont=0;

for(int i=0;i<5;i++){
    cout<<"Digite a resposta correta do gabarito, questao "<<i+1<<endl;
    cin>>vet[i];
}
for (int i = 0; i < 5; i++){
    cout<<"digite a resposta do aluno,questao "<<i+1<<endl;
    cin>>vet1[i];
    
}
for(int i=0;i<5;i++){
    
        if(vet[i]==vet1[i]){
            cont ++;
        }
    
}
cout<<"A quantidade de acertos e: "<<cont<<endl;


    return 0;
}