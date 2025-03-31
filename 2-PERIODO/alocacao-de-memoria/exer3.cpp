#include <iostream>
using namespace std;

int main()
{
    int n;
    float total = 0;

    cout << "Digite o número de produtos: ";
    cin >> n;

    float *precos = new float[n];

    cout << "Digite os preços dos produtos: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Preço do produto " << i + 1;
        cin >> precos[i];
    }

    for (int i = 0; i < n; i++)
    {
        total += precos[i];
    }

    cout << "O total dos preços e: " << total << endl;

    delete[] precos;

    return 0;
}
