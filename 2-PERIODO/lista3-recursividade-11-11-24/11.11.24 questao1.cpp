#include<iostream>
using namespace std;
int somaDigitos(int n){
  if(n<10){
    return n;
  }
  return (n%10)+ somaDigitos(n/10);
}
int main(){
  int n;
  cout<<"Digite um valor: "<<endl;
  cin>>n;

  cout<<somaDigitos(n);

  return 0;
}