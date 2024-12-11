#include<iostream>
using namespace std;
void altera(int *p, int x){
  *p=x;
  cout<<*p;
}
int main(){
  int num=7;
  altera(&num,9);
  
  return 0;
}