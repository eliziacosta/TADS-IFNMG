#include<iostream>
using namespace std;
int main(){
  int vet[5]={10,5,8,12,3};
  int proc=8;
  bool achou=false;

  for(int i=0;i<5;i++){
    if(proc==vet[i]){
      achou=true;
      cout<<"Achou";
      break;
    }
  }
  if(!achou){
    cout<<"Nao achou";
  }
  

  return 0;
}