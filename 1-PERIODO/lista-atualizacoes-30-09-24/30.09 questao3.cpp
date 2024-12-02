/*Crie uma função que recebe um determinado valor inteiro por parâmetro e retorne o seu triplo. USE
VOID.*/
#include<iostream>
using namespace std;
void triplo(float num){
num=num*3;
cout<<"O valor do triplo e: "<<num<<endl;
}
int main(){
float num;
cout<<"Digite o numero "<<endl;
cin>>num;
triplo(num);
return 0;
}