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
  void imprimir();
  void menu();
  void ultimo();
  void ordenar();
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
void dupla::imprimir()
{
  No *aux = primeiroNo;
  if (primeiroNo == NULL)
  {
    cout << "nenhum vizinho";
  }
  else
  {
    No *aux = primeiroNo;
    while (aux != NULL)
    {
      if (aux->anterior)
      {
        cout << "vizinho da esquerda " << aux->anterior->valor << endl;
      }
      else
      {
        cout << "nenhum vizinho a esquerda" << endl;
      }
      if (aux->proximo)
      {
        cout << "vizinho a direita " << aux->proximo->valor << endl;
      }
      else
      {
        cout << "nenhum vizinho a direita" << endl;
      }
      aux = aux->proximo;
    }
  }
}
void dupla::ultimo()
{
  if (primeiroNo == NULL)
  {
    cout << "Nenhum vizinho" << endl;
    return;
  }

  No *aux = primeiroNo;
  while (aux->proximo != NULL)
  {
    aux = aux->proximo;
  }

  cout << "Último vizinho: " << aux->valor << endl;
}
void dupla::ordenar()
{
}
void dupla::menu()
{
  while (true)
  {
    int opc;
    float valor;
    cout << "1-novo vizinho " << endl
         << "2-imprimir vizinhos da esquerda e direita" << endl
         << "3-inserir vizinho" << endl
         << "4-verificar ultimo vizinho" << endl
         << "5-ordenacao dos numeros do vizinhos" << endl;
    cin >> opc;
    while (opc < 1 || opc > 5)
    {
      cout << "opcao invalida, digite novamente:" << endl;
      cin >> opc;
    }
    if (opc == 1)
    {
      cout << "novo vizinho, digite o numero da casa" << endl;
      cin >> valor;
      inserir(valor);
    }
    else if (opc == 2)
    {
      imprimir();
    }
    else if (opc == 3)
    {
      inserir(valor);
    }
    else if (opc == 4)
    {
      ultimo();
    }
    else if (opc == 5)
    {
    }
  }
}
int main()
{
  dupla d;
  d.criar();
  d.menu();

  return 0;
}