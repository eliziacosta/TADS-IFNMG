#include <iostream>
using namespace std;
struct No
{
  int valor;
  No *esq;
  No *dir;
};
struct arvorebin
{
  No *raiz;
  void criar();
  void inserirRec(No *&percorre, int valor);
  void inserir(int valor);
};
void arvorebin::criar()
{
  raiz = NULL;
}
void arvorebin::inserirRec(No *&percorre, int valor)
{
  if (percorre == NULL)
  {
    percorre = new No;
    percorre->dir = NULL;
    percorre->esq = NULL;
    percorre->valor = valor;
  }
  else
  {
    if (valor < percorre->valor)
    {
      inserirRec(percorre->esq, valor);
    }
    else
    {
      inserirRec(percorre->dir, valor);
    }
  }
}
void arvorebin::inserir(int valor)
{
  inserirRec(raiz, valor);
}
int main()
{

  return 0;
}