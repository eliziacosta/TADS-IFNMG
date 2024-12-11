#include<iostream>
using namespace std;
int *aloca(){
  int *p= new int;
  return p;
}
void desaloca(int *p){
  delete p;
}
int main(){
  
  int *ptr=aloca();
  int x=8;

  return 0;
}