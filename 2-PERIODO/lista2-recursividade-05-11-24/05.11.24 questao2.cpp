#include<iostream>
using namespace std;
int mod(int num){
  if(num==0){
    return 0;
  }
  mod(num/2);
  cout<<num%2;
}
int main(){
  int num;
  cout<<"digite um numero "<<endl;
  cin>>num;
  mod(num);
  
  return 0;
}