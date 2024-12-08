//Declare uma variável, um ponteiro para ela, e exiba seu valor e endereço de memória. 
#include<iostream>
using namespace std;
main() { 
int i=18, *p; 
p = &i; 
cout << "Valor: "<<*p<<endl;
cout << "Endereco de memoria: "<<p;

  return 0;
}