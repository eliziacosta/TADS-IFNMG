#include <iostream> 
using namespace std; 
int main() { 
 int a = 10; 
 int *ptr = &a; 
 cout << "Valor de a: " << a << endl;                //a=10
 cout << "Endereço de a: " << &a << endl;      //endereço de memória de a, no caso 10.
 cout << "Valor apontado por ptr: " << *ptr << endl;       //10
 *ptr = 20;   
 cout << "Novo valor de a: " << a << endl;       //20
 return 0; 
}
