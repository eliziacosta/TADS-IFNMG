#include<iostream>
using namespace std;
int contaDigitos(int n){
   if(n<10){
    return 1;
   }
   else{
    return 1+contaDigitos(n/10);
   }
}
int main(){
  int n;
  cout<<"digite o valor de n";
  cin>>n;
  cout<<contaDigitos(n);
  return 0;
}