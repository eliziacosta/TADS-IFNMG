#include<iostream>
using namespace std;
int main(){
  int vet[3];
  int *pont=vet;
  for(int i=0;i<3;i++){
  cout<<"digite o valor do vetor, posicao "<<i<<endl;
  cin>>pont[i];
  }

  cout<<"O vetor e : ";
  for(int i=0;i<3;i++){
    cout<<pont[i]<<" ";
  }
  return 0;
}