#include <iostream>
using namespace std;
struct No
{
  int valor;
  No *proximo;
};
struct fila
{
  No *primeiroNo;
  No *ultimoNo;
  void criar();
  void enfileirar();
  void desenfileirar();
  void imprimir();
};
void fila::criar()
{
  primeiroNo = NULL;
  ultimoNo = NULL;
}
void fila::enfileirar()
{
  static int cont = 1;
  No *novoNo = new No;
  novoNo->proximo = NULL;
  novoNo->valor = cont++;
  if (primeiroNo == NULL)
  {
    primeiroNo = novoNo;
    ultimoNo = novoNo;
  }
  else
  {
    ultimoNo->proximo = novoNo;
    ultimoNo = novoNo;
  }
}
void fila::desenfileirar()
{
  if (primeiroNo == NULL)
  {
    cout << "fila vazia";
  }
  else if (primeiroNo == ultimoNo)
  {
    delete primeiroNo;
    primeiroNo = NULL;
    ultimoNo = NULL;
  }
  else
  {
    No *aux = primeiroNo;
    primeiroNo = primeiroNo->proximo;
    delete aux;
  }
}
int main()
{

  return 0;
}