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
  void criar();
  void inserir(int valor);
  void excluir();
  void imprimir();
  int pesquisar();
};
void lista::criar()
{
  primeiroNo = NULL;
}
void lista::inserir(int valor)
{
  No *novoNo = new No;
  novoNo->proximo = NULL;
  novoNo->valor = valor;
  if (primeiroNo == NULL)
  {
    primeiroNo = novoNo;
  }
  else
  {
    No *aux = primeiroNo;
    while (aux->proximo != NULL)
    {
      aux = aux->proximo;
    }
    aux->proximo = novoNo;
  }
}
void lista::excluir()
{
  if (primeiroNo == NULL)
  {
    cout << "lista vazia";
  }
  else
  {
    No *aux = primeiroNo;
    primeiroNo = primeiroNo->proximo;
    delete aux;
  }
}
void lista::imprimir()
{
  if (primeiroNo == NULL)
  {
    cout << "lista vazia";
  }
  else
  {
    No *aux = primeiroNo;
    while (aux != NULL)
    {
      cout << aux->valor << " ";
      aux = aux->proximo;
    }
  }
}
int lista::pesquisar()
{
  int proc;
  cout << " ? ";
  cin >> proc;
  No *aux = primeiroNo;
  while (aux != NULL)
  {
    if (proc == aux->valor)
    {
      return 1;
    }
    aux = aux->proximo;
  }
}
int main()
{
  lista l;
  l.criar();
  l.inserir(45);
  l.inserir(90);
  l.inserir(8);
  l.imprimir();
  int r = l.pesquisar();
  if (r == 1)
  {
    cout << "esta";
  }
  else
  {
    cout << "nao";
  }

  return 0;
}