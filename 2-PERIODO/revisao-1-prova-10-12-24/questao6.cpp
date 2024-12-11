#include<iostream>
using namespace std;
int main(){
  int *p,*p1,n=4,n1=7;

  p=&n;
  p1=&n1;

  cout<<"O primeiro ponteiro vale: "<<*p<<endl;
  cout<<"O segundo ponteiro vale: "<<*p1<<endl;

  cout<<"A soma e: "<<*p+*p1<<endl;

  p=&n1;
  p1=&n;

  cout<<"O primeiro ponteiro vale: "<<*p<<endl;
  cout<<"O segundo ponteiro vale: "<<*p1;

}