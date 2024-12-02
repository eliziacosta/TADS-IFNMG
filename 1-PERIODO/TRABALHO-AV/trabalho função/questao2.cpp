/*Faça um programa com uma função que receba três números como argumentos e retorne a média aritmética desses números.*/
#include<iostream>
using namespace std;
float media(float n1, float n2, float n3){
    
    return (n1+n2+n3)/3;
}
int main(){
    float n1,n2,n3,valor;
    cout<<"digite os tres numeros: "<<endl;
    cin>>n1>>n2>>n3;

   valor=media(n1,n2,n3);
   cout<<"A media aritmetica e: "<<valor<<endl;

    return 0;
}