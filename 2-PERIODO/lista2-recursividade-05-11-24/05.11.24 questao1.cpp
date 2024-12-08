#include<iostream>
using namespace std;
int num(int n){
  if(n>0){
    cout<<n<<endl;
    return num(n-1);
  }
  else{
    return n;
  }
}
int main(){
  int n;
  cout<<"Digite um valor inteiro e positivo";
  cin>>n;
int resultado = num(n);

cout << "Resultado: " << resultado << endl;
  return 0;
}