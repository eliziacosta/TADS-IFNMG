#include <iostream>
using namespace std;
int main() {
    
    int num = 21;
    float num1 = 20.5;
    char letra = 'E';

    int *ptint = &num;  
    float *ptnum = &num1;     
    char *ptrChar = &letra;  

    cout << "numero inteiro: " <<num << endl;
    cout << "numero real: " << num1 << endl;
    cout << "letra: " << letra << endl;
    
    *ptint =36;    
    *ptnum = 22.19;     
    *ptrChar = 'F';       

    cout << "numeron inteiro: " <<num << endl;
    cout << "numero real: " << num1 << endl;
    cout << "letra: " << letra << endl;

    return 0;
}
