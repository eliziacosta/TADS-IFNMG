/*faça uma função que recebe, por parametro, um valor inteiro e positivo e retorna o numero de divisores desse valor*/
#include<iostream>
using namespace std;
int div(int num){
    int cont=0;

    for(int i=1; i<=num; i++){
        
    if(num % i==0){
         cont++;
    }
    
}
return cont;
}
int main(){
   int num,tot;
   cout<<"digite um numero inteiro e positivo"<<endl;
   cin>>num;
   
   tot=div(num);
   cout<<"o numero de divisores e: "<<tot<<endl;

    return 0;
}