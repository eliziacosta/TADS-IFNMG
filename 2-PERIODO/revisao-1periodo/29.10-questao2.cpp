#include<iostream>
using namespace std;
int main(){
int pa=80000, pb=200000, cont=0;

while(pa<=pb){
  pa = pa + (pa*0.03);
  pb = pb +(pb*0.015);
  cont++;
}

cout<<"A quantidade e : "<<cont;
  return 0;
}