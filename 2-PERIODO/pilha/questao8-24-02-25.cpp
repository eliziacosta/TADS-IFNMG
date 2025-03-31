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
  void menu();
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
void pilha::menu()
{
  while (true)
  {
    int opc, valor;
    cout << "1-empilhar" << endl
         << "2-desempilhar" << endl
         << "3-imprimir toda pilha" << endl
         << "4-sair" << endl;
    cin >> opc;
    while (opc < 1 || opc > 4)
    {
      cout << "opc invalida, digite novamente";
    }
    if (opc == 1)
    {
      cout << "digite o valor para empilhar" << endl;
      cin >> valor;
      empilhar(valor);
    }
    else if (opc == 2)
    {
      cout << "ultimo desemfileirado" << endl;
      desempilhar();
    }
    else if (opc == 3)
    {
      cout << "impressao da lista" << endl;
      imprimir();
    }
    else
    {
      cout << "sair";
    }
  }
}
int main()
{
  pilha p;
  p.menu();

  return 0;
}