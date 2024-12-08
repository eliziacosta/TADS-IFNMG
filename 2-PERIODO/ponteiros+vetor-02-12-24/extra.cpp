#include<iostream>
using namespace std;
int main(){
  int vet[5]={4,10,25,7,8};
  int *pont=vet;

  for(int i=0;i<5;i++){
    cout<<"O endereco e: "<<&pont[i]<<endl;
  }

  return 0;
}