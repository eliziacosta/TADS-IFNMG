#include <iostream>
using namespace std;
struct No
{
  int valor;
  No *proximo;
};
struct fila
{
  No *primeiroNo;
  No *ultimoNo;
  void criar();
  void enfileirar();
  void imprimir();
  void desenfileirar();
  void menu();
};
void fila::criar()
{
  primeiroNo = NULL;
  ultimoNo = NULL;
}
void fila::enfileirar()
{
  static int cont = 1;
  // alocar
  No *novoNo = new No;
  novoNo->proximo = NULL;
  novoNo->valor = cont++;

  if (primeiroNo == NULL)
  {
    primeiroNo = novoNo;
    ultimoNo = novoNo;
    return;
  }
  else
  {
    ultimoNo->proximo = novoNo;
    ultimoNo = novoNo;
  }
}
void fila::imprimir()
{
  if (primeiroNo == NULL)
  {
    cout << "fila vazia";
  }
  else
  {
    No *aux = primeiroNo;
    while (aux != NULL)
    {
      cout << aux->valor << " ";
      aux = aux->proximo;
    }
    cout << endl;
  }
}
void fila::desenfileirar()
{
  if (primeiroNo == NULL)
  {
    cout << "fila vazia";
    return;
  }
  // 1 elemento
  else if (primeiroNo == ultimoNo)
  {
    delete primeiroNo;
    primeiroNo = NULL;
    ultimoNo = NULL;
    return;
  }
  else
  {
    No *aux = primeiroNo;
    primeiroNo = primeiroNo->proximo;
    delete aux;
  }
}
void fila::menu()
{
  while (true)
  {
    int digito;
    cout << "digite a opcao" << endl;
    cin >> digito;
    while (digito < 1 || digito > 4)
    {
      cout << "digite uma opc valida" << endl;
      cin >> digito;
    }
    if (digito == 1)
    {
      cout << "criando nova senha";
      enfileirar();
    }
    else if (digito == 2)
    {
      cout << "atendimento finalizado";
      desenfileirar();
    }
    else if (digito == 3)
    {
      cout << "mostrando fila de atendimento" << endl;
      imprimir();
    }
    else
    {
      cout << "ate logo";
      return;
    }
  }
}
int main()
{
  fila f;
  f.criar();
  f.enfileirar();
  f.enfileirar();
  f.enfileirar();
  f.imprimir();
  f.menu();

  return 0;
}