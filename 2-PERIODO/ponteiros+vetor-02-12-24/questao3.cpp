#include<iostream>
using namespace std;
int main(){
  float peso[5];
  float soma=0.0;
  float media;

  float *p=peso;

  for(int i=0;i<5;i++){
    cout<<"Digite o valor da posicao "<<i+1<<endl;
    cin>>p[i];
    soma=soma+p[i];

  }

  media=soma/5.0;
  cout<<"a media e: "<<media;

  return 0;
}