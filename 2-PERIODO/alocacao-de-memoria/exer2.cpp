#include <iostream>
#include <string>
using namespace std;
int main()
{
  cout << "Digite o tamanho da frase: ";
  int n;
  cin >> n;
  cin.ignore();
  char *frase = new char[n + 1];

  cout << "Digite a frase: ";
  cin.getline(frase, n + 1);

  int vogais = 0;
  for (int i = 0; frase[i] != 0; i++)
  {
    if (frase[i] == 'a' || frase[i] == 'A' || frase[i] == 'e' || frase[i] == 'E' ||
        frase[i] == 'i' || frase[i] == 'I' || frase[i] == 'o' || frase[i] == 'O' ||
        frase[i] == 'u' || frase[i] == 'U')
    {
      vogais++;
    }
  }

  cout << "Numero de vogais na frase: " << vogais << endl;

  delete[] frase;

  return 0;
}