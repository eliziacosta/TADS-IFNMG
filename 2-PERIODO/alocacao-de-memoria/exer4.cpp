#include <iostream>
using namespace std;

int main()
{

    float *peso = new float;

    cout << "Digite o peso: ";
    cin >> *peso;

    cout << "O peso da pessoa é: " << *peso << endl;

    delete peso;

    return 0;
}
