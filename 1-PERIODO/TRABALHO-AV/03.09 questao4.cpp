/*Crie um programa que receba dois vetores, cada um representando um conjunto de 10 números inteiros.
Em seguida, compare os elementos correspondentes dos dois vetores e determine qual é o maior valor em
cada posição.*/
#include<iostream>
using namespace std;
int main(){
int vet[10],vet1[10];

for(int i=0;i<10;i++){
cout<<"digite o valor do vetor 1"<<endl;
cin>>vet[i];

}
for(int i=0;i<10;i++){
cout<<"digite o valor do vetor 2"<<endl;
cin>>vet1[i];
}
for(int i=0; i<10;i++){

if(vet[i]>vet1[i]){
cout<<"Vetor 1 maior "<<vet[i]<<endl;
}
else{
cout<<"Vetor 2 maior "<<endl
<<vet1[i]<<endl;
}
}
return 0;
}