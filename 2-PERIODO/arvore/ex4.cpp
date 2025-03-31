void ArvoreBinaria::Filhos(No *percorre)
{
  int cont = 0;
  if (percorre == NULL)
  {
    return;
  }
  if (percorre->dir != NULL)
  {
    cont++;
  }
  if (percorre->esq != NULL)
  {
    cont++;
  }
}
void ArvoreBinaria::exibirqtdFilhos()
{

  cout << "Quantidade de filhos por nó:" << endl;
  Filhos(raiz);
}
