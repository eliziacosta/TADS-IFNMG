/*Crie uma função que recebe um determinado valor inteiro por parâmetro e retorne o seu dobro.
Utilize o operador & na passagem de parâmetro. USE VOID.*/

#include<iostream>

using namespace std;
void dobro(int &num){
num=num*2;
cout<<"Valor dentro da funcao: "<<num<<endl;
}
int main(){
int num;
cout<<"Digite o numero "<<endl;
cin>>num;
dobro(num);
cout<<"O valor de num e: "<<num<<endl;
return 0;
}