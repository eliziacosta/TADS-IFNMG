#include<iostream>
using namespace std;
void fat(int num){
    int fator=1;

    for ( int i = num ; i >= 1 ; i -- ){
        
        fator = fator * i;
        
}
}

int main(){
   int num,fator;
   cout<<"Digite um numero inteiro: "<<endl;
   cin>>num;
   fat(num);
   cout<<"o fatorial de "<<num<<" e: "<<fator<<endl;


    return 0;
}