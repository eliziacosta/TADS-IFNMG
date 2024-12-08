#include<iostream>
#include<string>
using namespace std;
struct hospital{
  string nome;
  string localizacao;
  int nFuncionario;
  float valor;
  int capPaciente;

};
int main(){
  hospital h1;
  cout<<"digite o nome do hospital: "<<endl;
  getline(cin,h1.nome);
  cout<<"digite a localizacao: "<<endl;
  cin>>h1.localizacao;
  cout<<"digite o numero de funcionarios: "<<endl;
  cin>>h1.nFuncionario;
  cout<<"digite o valor recebido por mes: "<<endl;
  cin>>h1.valor;
  cout<<"digite a capacidade de pacientes: "<<endl;
  cin>>h1.capPaciente;
  
  return 0;
}