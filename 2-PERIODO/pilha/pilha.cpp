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
  void imprimir();
  void desempilhar();
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
void pilha::imprimir()
{
  if (topo == NULL)
  {
    cout << "pilha vazia" << endl;
  }
  else
  {
    while (topo != NULL)
    {
      cout << topo->valor << endl;
      topo = topo->proximo;
    }
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
int main()
{
  pilha p;
  p.criar();
  p.empilhar(3);
  p.empilhar(5);
  p.empilhar(69);
  // p.desempilhar();
  p.imprimir();

  return 0;
}