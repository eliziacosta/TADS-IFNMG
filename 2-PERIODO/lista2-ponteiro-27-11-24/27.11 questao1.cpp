#include<iostream>
using namespace std;
int main() {
	
    int vet[5];
    int maior=-5, menor=800000;

    cout << "Digite 5 numeros inteiros:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Numero " << i+1 <<endl;
        cin >> vet[i];
    }

    
    for (int i = 1; i < 5; i++) {
        if (vet[i] > maior) {
            maior = vet[i]; 
        }
        
    }

    for(int i=0; i<5; i++){
      if(vet[i]<menor){
        menor = vet[i];
      }
    }

    cout << "O maior numero e: " << maior << endl;
    cout << "O menor numero e: " << menor << endl;

    return 0;
}