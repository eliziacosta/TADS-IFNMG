#include <iostream>
using namespace std;
struct No
{
  int valor;
  No *proximo;
};
struct pilha
{
  No *topo;
  void criar();
  void empilhar(int valor);
  void desempilhar();
  void imprimir();
};
void pilha::criar()
{
  topo = NULL;
}
void pilha::empilhar(int valor)
{
  No *novoNo = new No;
  novoNo->proximo = NULL;
  novoNo->valor = valor;
  if (topo == NULL)
  {
    topo = novoNo;
  }
  else
  {
    novoNo->proximo = topo;
    topo = novoNo;
  }
}
void pilha::desempilhar()
{
  if (topo == NULL)
  {
    cout << "pilha vazia";
  }
  else
  {
    No *aux = topo;
    topo = topo->proximo;
    delete aux;
  }
}
void pilha::imprimir()
{
  if (topo == NULL)
  {
    cout << "pilha vazia";
  }
  else
  {
    No *aux = topo;
    while (aux != NULL)
    {
      cout << aux->valor << " ";
    }
    aux = aux->proximo;
  }
}
int main()
{
  pilha p;
  p.criar();
  p.empilhar(56);
  p.empilhar(23);
  p.empilhar(7);
  p.desempilhar();
  p.imprimir();
  return 0;
}