#include<iostream>
using namespace std;
int main(){
  float nota;
  cout<<"Digite uma nota entre zero e dez"<<endl;
  cin>>nota;

  while(nota<0 || nota>10){
    cout<<"Nota invalida,digite uma nota valida"<<endl;
    cin>>nota;
  }

  cout<<"Nota valida";

  return 0;
}