#include<iostream>
using namespace std;
int main(){
  float salario,reaj;

  cout<<"Digite o salario que recebe: "<<endl;
  cin>>salario;

  if(salario>0 && salario<=280){
    reaj=salario + (salario * 0.20);
    cout<<"O reajuste do salario e "<<reaj<<endl;
  }

  else if(salario > 280 && salario < 700){
    reaj=salario + (salario * 0.15);
    cout<<"O reajuste do salario e "<<reaj<<endl;
  }

  else if(salario>700 && salario<=1500){
    reaj=salario + (salario * 0.10);
    cout<<"O reajuste do salario e "<<reaj<<endl;
  }
  else{
    cout<<"Salario invalido";
  }

  return 0;
}