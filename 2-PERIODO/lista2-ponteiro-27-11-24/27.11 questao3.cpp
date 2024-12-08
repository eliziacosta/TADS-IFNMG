#include<iostream>
#include<string>
using namespace std;
struct quilombola{
  string nome;
  int qtd;
  float renda;
  float peso;
};
int main(){
  quilombola a1;

  for(int i=0; i<3;i++){
    cout<<"Comunidade Quilombola "<<i+1<<endl;
    cout<<"Digite o nome da comunidade: ";
    cin.ignore();
    getline(cin, a1.nome);
    cout<<"Digite a quantidade de moradores: ";
    cin>>a1.qtd;
    cout<<"Digite a renda media da comunidade: ";
    cin>>a1.renda;
    cout<<"Digite o peso medio da comunidade: ";
    cin>>a1.peso;
  }

  return 0;
}