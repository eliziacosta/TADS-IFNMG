#include<iostream>
using namespace std;
int main(){
  int n, *p;
  cout<<"Digite um numero: ";
  cin>>n;
  p = &n;
  cout<<"O dobro de "<<n<<" e: "<<*p*2;

  return 0; 
}