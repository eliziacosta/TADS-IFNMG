void ArvoreBinaria::Busca(No *percorre, int valor)
{
  f(percorre == NULL)
  {
    cout <<”LISTA VAZIA” << endl;
    return;
  }
  int procurado;
  cout <<”digite o valor procurado << endl;
  cin >> procurado;
  if (procurado < percorre->valor)
  {
    Busca(percorre->esq);
  }
  else
  {
    Busca(percorre->dir);
  }
}
void ArvoreBinaria::buscaValor(int valor)
{
  if (Busca(raiz, valor))
  {
    cout << "Valor " << valor << " encontrado na árvore " << endl;
  }
  else
  {
    cout << "Valor " << valor << " n ta na árvore." << endl;
  }
}
