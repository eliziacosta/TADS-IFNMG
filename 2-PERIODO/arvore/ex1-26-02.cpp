#include <iostream>
using namespace std;
struct No
{
  int valor;
  No *esq;
  No *dir;
};

struct ArvoreBin
{
  No *raiz;
  void Criar();
  void Inserir(int valor);
  void InserirRec(No *&percorre, int valor);
  void ImprimirPreOrdem();
  void PreOrdem(No *percorre);
  void ImpressaoPosOrdem();
  void PosOrdem(No *percorre);
  void EmOrdem(No *percorre);
  void ImpressaoOrdem();
};
void ArvoreBin::Criar()
{
  raiz = NULL;
}
void ArvoreBin::Inserir(int valor)
{
  InserirRec(raiz, valor);
}
void ArvoreBin::InserirRec(No *&percorre, int valor)
{
  if (percorre == NULL)
  {
    percorre = new No;
    percorre->valor = valor;
    percorre->dir = NULL;
    percorre->esq = NULL;
  }
  else
  {
    if (valor < percorre->valor)
    {
      InserirRec(percorre->esq, valor);
    }
    else
    {
      InserirRec(percorre->dir, valor);
    }
  }
}
void ArvoreBin::ImprimirPreOrdem()
{
  PreOrdem(raiz);
  cout << endl;
}

void ArvoreBin::PreOrdem(No *percorre)
{
  if (percorre != NULL)
  {
    cout << percorre->valor << " "; // Visita a raiz
    PreOrdem(percorre->esq);        // Percorre a subárvore esquerda
    PreOrdem(percorre->dir);        // Percorre a subárvore direita
  }
}
void ArvoreBin::ImpressaoPosOrdem()
{
  PosOrdem(raiz);
  cout << endl;
}
void ArvoreBin::PosOrdem(No *percorre)
{
  PosOrdem(percorre->esq);
  PosOrdem(percorre->dir);
  cout << percorre->valor;
}
void ImpressaoOrdem()
{
  EmOrdem(raiz);
}
void ArvoreBin::EmOrdem(No *percorre)
{
  PosOrdem(percorre->esq);
  cout << percorre->valor;
  PosOrdem(percorre->dir);
}

int main()
{
  ArvoreBin a;
  a.Criar();
  a.Inserir(8);
  a.Inserir(19);
  a.Inserir(-1);
  a.ImprimirPosOrdem();

  return 0;
}