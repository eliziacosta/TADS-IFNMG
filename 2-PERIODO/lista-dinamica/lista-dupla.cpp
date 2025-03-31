#include <iostream>
using namespace std;
struct No
{
  No *proximo;
  No *anterior;
  int valor;
};
struct dupla
{
  No *primeiroNo;
  void criar();
  void inserir(int valor);
  void excluir();
  // int pesquisar();
  void meio(No *aux);
  No *pesquisa(int valor); // outra forma
  void pesqExc(int valor);
};
void dupla::criar()
{
  primeiroNo = NULL;
}
void dupla::inserir(int valor)
{
  No *novoNo = new No;
  novoNo->proximo = NULL;
  novoNo->valor = valor;
  novoNo->anterior = NULL;

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
void dupla::excluir()
{
  if (primeiroNo == NULL)
  {
    cout << "lista vazia" << endl;
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
/*int dupla::pesquisar()
{
  int procurado;
  cout << "insira o valor procurado";
  cin >> procurado;
  No *aux = primeiroNo;
  while (aux != NULL)
  {
    if (procurado == aux->valor)
    {
      return 1;
    }
    aux = aux->proximo;
  }
}*/
void dupla::meio(No *aux)
{
  No *aux2 = aux->anterior;
  No *aux3 = aux->proximo;
  aux2->proximo = aux3;
  aux3->anterior = aux2;
  delete aux;

  // aux->anterior->proximo = aux->proximo; 
  // aux->proximo->anterior = aux->anterior;
}
No *dupla::pesquisa(int valor)
{
  if (primeiroNo == NULL)
  {
    cout << "lista vazia";
  }
  else
  {
    No *aux = primeiroNo;
    while (aux->proximo != NULL)
    {
      if (aux->valor == valor)
      {
        return aux;
      }
      aux = aux->proximo;
    }
  }
}
void dupla::pesqExc(int valor)
{
  No *aux=primeiroNo;
  No *recebido = pesquisa(valor);
  if (primeiroNo == NULL)
  {
    cout << "lista vazia";
  }
  else if (aux->anterior != NULL && aux->proximo != NULL)
  {
    meio(recebido);
  }
}
int main()
{
  dupla dupla1;
  dupla1.criar();
  dupla1.inserir(18);
  dupla1.inserir(20);
  dupla1.inserir(13);
  dupla1.excluir();
  /*int r = dupla1.pesquisar();
  if (r == 1)
  {
    cout << "valor existe na lista" << endl;
  }
  else
  {
    cout << "nao existe na lista" << endl;
  }*/

  return 0;
}