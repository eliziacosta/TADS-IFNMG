#include <iostream>
#include<locale.h>
using namespace std;
int main() {
	setlocale(LC_ALL,"portuguese");

    
    cout << "Valor do xerox: 0.06"<<endl;

    for (int i = 1; i <= 200; ++i) {
        cout<<i<<"="<<i*0.06 <<"  "; 

        
        if (i % 10 == 0) {
            cout <<endl;
        }
    }

    return 0;
}