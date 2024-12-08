#include<iostream>
using namespace std;
int main(){
  int vet[4],total;
  int *p= vet;

  for(int i=0;i<4;i++){
    cout<<"digite o numero do vetor, posicao "<<i<<endl;
    cin>>p[i];
  }

  for(int i=0;i<4;i++){
    total=p[i]*4;
    cout<<"o quadruplo do elemento "<<p[i]<<" e "<<total<<endl;
  }
  return 0;
}