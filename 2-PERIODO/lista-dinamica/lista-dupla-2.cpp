#include <iostream>
using namespace std;
struct No
{
  int valor;
  No *anterior;
  No *proximo;
};
struct Dupla
{
  No *primeiroNo;
  void Criar();
  void Inserir(int valor);
  void Imprime();
  void excluirinicio();
  void excluirfim();
  void excluirmeio(No *recebido);
  No *pesquisa(int valor);
  void pesqExc(int valor);
};
void Dupla::Criar()
{
  primeiroNo = NULL;
}
void Dupla::Inserir(int valor)
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
void Dupla::Imprime()
{
  if (primeiroNo == NULL)
  {
    cout << "Lista Vazia" << endl;
    return;
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
void Dupla::excluirinicio()
{
  // lista vazia
  if (primeiroNo == NULL)
  {
    cout << "lista vazia";
    return;
  }
  // lista com 1 elemento
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
void Dupla::excluirfim()
{
  if (primeiroNo == NULL)
  {
    cout << "lista vazia";
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
void Dupla::excluirmeio(No *recebido)
{
  No *aux2 = recebido->anterior;
  No *aux3 = recebido->proximo;
  aux2->proximo = aux3;
  aux3->anterior = aux2;
  delete recebido;

  // SEM A VARIAVEL AUXILIAR
  // recebido->anterior->proximo=recebido->proximo;
  // recebido->proximo->anterior=recebido->anterior;
}
No *Dupla::pesquisa(int valor)
{
  if (primeiroNo == NULL)
  {
    cout << "lista vazia";
    return NULL;
  }
  else
  {
    No *aux = primeiroNo;
    while (aux != NULL)
    {
      if (aux->valor == valor)
      {
        return aux;
      }
      aux = aux->proximo;
    }
    return NULL;
  }
}
void Dupla::pesqExc(int valor)
{

  No *procurado = pesquisa(valor);
  if (procurado == NULL)
  {
    cout << "elemento nao existe na lista";
    return;
  }
  // elemento meio
  else if (procurado->anterior != NULL && procurado->proximo != NULL)
  {
    excluirmeio(procurado);
  }
  // 1 da lista
  else if (procurado->anterior == NULL)
  {
    excluirinicio();
  }
  else
  {
    excluirfim();
  }
}
int main()
{
  Dupla lista;
  lista.Criar();
  lista.Inserir(17);
  lista.Inserir(48);
  lista.Inserir(23);
  lista.Inserir(2);
  lista.Imprime();
  lista.pesqExc(48);
  cout << endl;
  lista.Imprime();
  return 0;
}