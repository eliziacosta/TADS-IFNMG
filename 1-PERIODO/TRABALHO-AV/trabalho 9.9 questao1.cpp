#include<iostream>
using namespace std;
int main(){
   float compra,bonus;

   for(int i=0;i<15;i++){
     cout<<"digite o valor da compra do cliente "<<i+1<<endl;
     cin>>compra;
     if (compra>1000){
        bonus=compra*0.15;
        cout<<"cliente "<<i+1<<" recebe um bonus de "<<bonus<<endl;
        
     }else{
        bonus=compra*0.10;
       cout<<"cliente "<<i+1<<" recebe um bonus de "<<bonus<<endl;
     }

   }
   
   
return 0;
}