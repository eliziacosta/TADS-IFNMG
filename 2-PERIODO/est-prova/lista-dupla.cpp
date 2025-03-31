#include <iostream>
using namespace std;
struct No
{
  No *anterior;
  No *proximo;
  int valor;
};
struct dupla
{
  No *primeiroNo;
  void criar();
  void inserir(int valor);
  void excluirInicio();
  void excluirFim();
  void excluirMeio(No *recebido);
  void imprimir();
};
void dupla::criar()
{
  primeiroNo = NULL;
}
void dupla::inserir(int valor)
{
  No *novoNo = new No;
  novoNo->anterior = NULL;
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
    novoNo->anterior = aux;
  }
}
void dupla::excluirInicio()
{
  if (primeiroNo == NULL)
  {
    cout << "vazia";
  }
  else if (primeiroNo->proximo == NULL)
  {
    delete primeiroNo;
    primeiroNo = NULL;
    return;
  }
  else
  {
    No *aux = primeiroNo;
    primeiroNo = primeiroNo->proximo;
    primeiroNo->anterior = NULL;
    delete aux;
  }
}
void dupla::excluirFim()
{
  if (primeiroNo == NULL)
  {
    cout << "vazia";
    return;
  }
  else if (primeiroNo->proximo == NULL)
  {
    delete primeiroNo;
    primeiroNo = NULL;
    return;
  }
  else
  {
    No *aux = primeiroNo;
    while (aux->proximo != NULL)
    {
      aux = aux->proximo;
    }
    No *aux2 = aux->anterior;
    aux2->proximo = NULL;
    delete aux;
  }
}

void dupla::excluirMeio(No *recebido)
{
  No *aux = primeiroNo;
  No *aux2 = aux->anterior;
  No *aux3 = aux->proximo;
  aux2->proximo = aux3;
  aux3->anterior = aux;
  delete recebido;
}
int main()
{
  dupla d;
  d.criar();
  d.inserir(58);
  d.inserir(98);
  d.inserir(56);
  d.imprimir();

  return 0;
}