#include<iostream>
using namespace std;
int main(){
  int vet[4]={8,56,67,22},valor;
  int *p=vet;
  bool achou = false;
  cout<<"digite o valor que vc quer encontrar: ";
  cin>>valor;
  for (int i=0;i<4;i++){
    if(p[i]==valor){
        achou=true;
        cout<<"valor encontardo na posicao "<<i;
        break;
    }
  }
  if(!achou){
    cout<<"Nao tem no vetor";
  }
  return 0;
}