#include <iostream>
using namespace std;
// representaçao do no - valor e ponteiro
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
  void imprimir();
  int contar();
  void excluir();
  int pesquisar();
};
void lista::criar()
{
  primeiroNo = NULL;
}
void lista::inserir(int valor)
{
  // alocar novo no
  No *novoNo = new No;
  novoNo->proximo = NULL;
  novoNo->valor = valor;
  // caso 1 -lista vazia
  if (primeiroNo == NULL)
  {
    primeiroNo = novoNo;
  }
  // caso 2 -lista com elementos
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
void lista::imprimir()
{

  if (primeiroNo == NULL)
  {
    cout << "A lista esta vazia" << endl;
  }
  else
  {
    No *aux = primeiroNo;
    while (aux != NULL)
    {
      cout << aux->valor << endl;
      aux = aux->proximo;
    }
  }
}
int lista::contar()
{
  int cont = 0;

  No *aux = primeiroNo;
  while (aux != NULL)
  {
    cont++;
    aux = aux->proximo;
  }
  return cont;
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
int lista::pesquisar()
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
}
int main()
{
  lista lista1;
  lista1.criar();
  lista1.inserir(18);
  lista1.inserir(20);
  lista1.inserir(13);
  lista1.excluir();

  cout << "Numeros na lista: " << endl;
  lista1.imprimir();
  cout << "quantidade de elementos na lista: " << lista1.contar() << endl;
  int r = lista1.pesquisar();

  if (r == 1)
  {
    cout << "valor existe na lista" << endl;
  }
  else
  {
    cout << "nao existe na lista" << endl;
  }
  return 0;
}