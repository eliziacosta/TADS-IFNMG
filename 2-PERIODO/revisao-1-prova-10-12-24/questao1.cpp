#include<iostream>
using namespace std;
int main(){
  int vet[5]={15,65,32,14,5};
  int *p=vet;
  for(int i=0;i<5;i++){
    cout<<"digite um numero do vetor posicao "<<i<<endl;
    cin>>p[i];
  }

  p[2]=12;

    for (int i = 0; i < 5; i++) {
        cout << i <<" "<< p[i] << endl;
    }
   
    for (int i = 0; i < 5; i++) {
        cout<<"O endereco de memoria de "<<p[i]<<" e "<< &p[i] << endl;
    }


  return 0;
}