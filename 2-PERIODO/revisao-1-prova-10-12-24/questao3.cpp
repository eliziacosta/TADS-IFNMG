#include<iostream>
using namespace std;
int main(){
  int vet[5]={1,3,5,7,9};
  int escolha=7, direita=4,esquerda=0,meio;
  bool achou=false;

  for(int i=0;i<5;i++){
    meio=(esquerda+direita)/2;
    if(escolha==vet[meio]){
      achou=true;
      cout<<"Achou na posicao "<<meio<<endl;
      break;
    }
    else if(escolha<vet[meio]){
      direita=meio-1;
    }
    else{
      esquerda=meio+1;
    }
  }
  if(!achou){
    cout<<"Nao encontrado no vetor";
  }

  return 0;
}