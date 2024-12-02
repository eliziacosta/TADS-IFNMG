/*Desenvolva um programa em C++ que permita ao usuário inserir uma lista de 10 nomes de candidatos
aprovados em um concurso. Em seguida, o programa deve solicitar ao usuário que insira um nome
específico e verificar se esse nome está presente na lista de aprovados. Se o nome estiver na lista,
exiba uma mensagem parabenizando o candidato. Caso contrário, informe que o nome não foi
encontrado na lista de aprovados.*/
#include<iostream>
#include<string>
using namespace std;
int main(){
   string lista[10],nome;
   for(int i=0;i<10;i++){

      cout<<"Digite o nome do candidato "<<i+1<<" aprovado no concurso ";

      getline(cin,lista[i]);

   } 
   cout<<"Digite o nome para saber se foi aprovado "<<endl;
   getline(cin,nome);   
   
   int achou=0;
   for(int i=0;i<10;i++){
      if(nome==lista[i]){
         achou=1;
         break;
      }
      else{
         achou=0;
      }
      
   }
   if( achou ==1 ){
      cout<<"Candidato encontrado";
   }
   else{
      cout<<"Candidato não encontrado";
   }

    return 0;
}