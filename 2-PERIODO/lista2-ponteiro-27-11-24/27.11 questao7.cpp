#include<iostream>
using namespace std;
int dobro(int n){
  return n*2;
}
int main(){
  int n;
  cout<<"digite o numero: "<<endl;
  cin>>n;

  cout<<"O dobro e: "<<dobro(n);
  return 0;
}