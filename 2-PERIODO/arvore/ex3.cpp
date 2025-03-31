
void ArvoreBin::NoFolha()
{
  ImprimirFolha(raiz);
}
void ArvoreBin::ImprimirFolha(No *&percorre)
{
  if (percorre == NULL)
  {
    cout << "Nao tem nó folha";
    return;
  }
  else
  {
    if (percorre->esq == NULL && percorre->dir == NULL)
    {
      cout << percorre->valor;
    }
  }
  ImprimirFolha(percorre->esq);
  ImprimirFolha(percorre->dir);
}
