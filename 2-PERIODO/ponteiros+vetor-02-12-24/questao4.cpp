#include<iostream>
using namespace std;
int main(){
  float vet[7],maior=-1,menor=84848;
  float *p=vet;

  for(int i=0;i<7;i++){
    cout<<"digite a altura do candidato "<<i+1<<endl;
    cin>>p[i];
  }
   for(int i=0;i<7;i++){
    if(p[i]>maior){
      maior=p[i];
    }
    else if(p[i]<menor){
      menor=p[i];
    }
  }
  cout<<"A maior altura e: "<<maior<<endl;
  cout<<"A menor altura e: "<<menor;

  return 0;
}