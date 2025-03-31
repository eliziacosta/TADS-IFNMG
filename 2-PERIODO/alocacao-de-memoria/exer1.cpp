#include<iostream>
using namespace std;
int main(){
  int num;
  cout<<"qual o tamanho do vetor?"<<endl;
  cin>>num;

  int *vet= new int[num];
  for(int i=0; i<num; i++){
    cin>>vet[i];
  }
  for(int i=num-1; i>0; i--){
    cout<<vet[i]<<" ";
  }
  delete[]vet;
  
  return 0;
}