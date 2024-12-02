/*Solicite ao usuário que insira um vetor de tamanho 10. Calcule e exiba a média aritmética dos
valores contidos no vetor.*/
#include<iostream>
using namespace std;
int main(){
   int vet[10],soma=0;
   float media,cont=0;

   for(int i=0;i<10;i++){
    cont++;
    cout<<"Digite o valor do indice "<<i<<endl;
    cin>>vet[i];
    soma+=vet[i];
   }
   media=soma/cont;
   cout<<"A media aritmetica do vetor e: "<<media;
   
    return 0;
}