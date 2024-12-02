/*Leia um conjunto de 10 notas de um atleta, calcule a sua média e mostre na tela.*/

#include<iostream>
using namespace std;
int main(){
int vet[10];
float nota,total=0,media;
for(int i=0;i<10;i++){
cout<<"Atleta"<<i+1<<endl;
cout<<"Digite a nota: "<<endl;
cin>>vet[i];
total+=vet[i];
}
media=total/10;
cout<<"A media das notas e: "<<media<<endl;
return 0;
}