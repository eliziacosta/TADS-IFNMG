#include<iostream>
using namespace std;
int main(){
  int vet[5]={39,40,50,69,75};
  int esquerda=0,direita=4;
  int escolha,meio;
  bool achou=false;
  cout<<"Qual o numero desse vetor vc quer encontrar: [39,40,50,69,75]: ";
  cin>>escolha; 

  for(int i=0;i<5;i++){
    meio=(esquerda+direita)/2;
    if(escolha==vet[meio]){
      cout<<"achou "<<escolha<<" na posicao "<<meio;
      achou=true;
      break;
    }
    else if(escolha<vet[meio]){
      direita = meio-1;;
      
    }
    else{
      esquerda = meio+1;
    }
  }
  if(!achou){
    cout<<"Numero nao encontrado";
  }

  return 0;
}