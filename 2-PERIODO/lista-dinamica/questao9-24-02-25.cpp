#include <iostream>
using namespace std;

struct No
{
  int valor;
  No *proximo;
};
struct lista
{
  No *primeiroNo;
  void verificar();
};
void lista::verificar()
{
  primeiroNo == NULL;
  cout << "lista vazia";
}
int main()
{
  lista l;
  l.verificar();
}