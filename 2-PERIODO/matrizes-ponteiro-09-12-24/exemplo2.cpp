#include<iostream>
using namespace std;
int *func(int *p){
  cout<<&p<<endl;
  cout<<*p;
  return p;
}
int main(){
  int num=7;
  int *p=&num;
  int *q=func(p);

  return 0;
}