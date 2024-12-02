/*Crie uma matriz de tamanho 3x3, peça os dados aos usuários e mostre na tela essa matriz.*/
#include<iostream>
using namespace std;
int main(){
int vetor[3];
int matriz[3][3];
for(int i=0;i<3;i++){

for(int j=0;j<3;j++){
cin>>matriz[i][j];
}
}
for(int i=0;i<3;i++){
for(int j=0;j<3;j++){
cout<<matriz[i][j];
}
}
return 0;
}