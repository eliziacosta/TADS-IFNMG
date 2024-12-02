/*Inclua no exercício anterior: Critério de aprovação: O aluno será aprovado se alcançar 5 acertos ou
mais. Caso contrário, será reprovado. Exiba a quantidade de acertos e a situação final do aluno:
"Aprovado" ou "Reprovado".*/
#include<iostream>
using namespace std;
int main(){
char vet[5],vet1[5];
int cont=0;

for(int i=0;i<5;i++){
    cout<<"Digite a resposta correta do gabarito, questao "<<i+1;
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
if (cont>=5)
{
   cout<<"Aprovado"<<endl;
}
else{
    cout<<"Reprovado";
}

    return 0;
}