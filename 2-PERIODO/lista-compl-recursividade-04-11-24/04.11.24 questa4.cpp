#include<iostream>
using namespace std;
int soma(int vet[],int tam){
  if(tam<=0){
    return 0;
  }
  else{
    return vet[tam-1]+soma(vet,tam-1);
  }
}
int main(){
 int vet[4]={12,14,16,19};
 int tam=4;
int resultado = soma(vet, tam);

cout << "Resultado: " << resultado << endl;
  return 0;
}