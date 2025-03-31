#include<iostream>
using namespace std;
//representaçao do no - valor e ponteiro
struct No {  
  int valor;
  No *proximo;
};
struct lista{     //estrutura lista para colocar as funcoes da lista e inserir o primeiro no com ponteiro.
  No *primeiroNo;
  void criar();   //esta funcao é pra criar a lista
  void inserir(int valor); //esta funcao é para inserir os valores na lista, ela tem o parametro do valor para inserir os valores da lista,podia ser(float, char e etc...)
  void imprimir(); //essa funcao é para "imprimir", mostrar na tela os valores inseridos
  int contar();   // essa é para contar quantos elementos tem na lista
};
void lista::criar(){  //cria a lista
  primeiroNo=NULL; //o primeiro no é igualado a NULL, pq o nó aponta para algum lugar
}
void lista::inserir(int valor){ //inserir os valores na lista
  No *novoNo= new No; //aloca novo no
  novoNo->proximo=NULL; // o proximo no sera NULL
  novoNo->valor=valor; // guarda o valor do no

  //caso 1 -lista vazia
  if(primeiroNo==NULL){ //o if é utilizado pra saber se o primeiro no é NULL, isso significa que a lista esta vazia e o primeiro no passa a ser o novo no.
    primeiroNo= novoNo;
  }

  //caso 2 -lista com elementos
  else{ // se a lista n estiver vazia ele vai cair no else
    No *aux=primeiroNo;//cria um novo ponteiro auxiliar que aponta pro primeiro no
    while(aux->proximo!=NULL){ //enquanto o proximo no for diferente de NULL
      aux=aux->proximo; //ele vai andar uma casa, ate chegar no NULL
    }
    aux->proximo=novoNo;//quando parar o while, o novo no sera o proximo sendo o ultimo da lista
  }
}
void lista::imprimir(){ //imprimi os numeros
  
  if(primeiroNo==NULL){ //se o primeiro no for NULL, significa que a lista ta vazia
    cout<<"A lista esta vazia"<<endl;
  }
  else{ 
  No *aux=primeiroNo;//cria um novo ponteiro auxiliar que aponta pro primeiro no
  while(aux!=NULL){ //se o pimeiro no for diferente de NULL
    cout<<aux->valor<<endl;//vai aparecer o valor do no
    aux=aux->proximo;//e aqui vai andando para o proximo no
  }
  }
}
int lista::contar(){ //vai contar quantos elementos tem na lista
  int cont=0; //tem um contador iniciado com 0
  
  No *aux=primeiroNo; // um no auxiliar
  while(aux!=NULL){//se o pimeiro no for diferente de NULL
    cont++; //vai contando
    aux=aux->proximo; //vai andando pro proximo,ate o laço encerrar
  
  }
   return cont;//vai retornar a quantidade de elementos pelo contador
}
int main(){
  lista lista1; //cria uma lista
    lista1.criar(); 
    lista1.inserir(18);// insere os valores na lista
    lista1.inserir(20);
    lista1.inserir(13);
    lista1.inserir(3);
    
    cout<<"Numeros na lista: "<<endl;
    lista1.imprimir(); //mostra no compilador os numeros inseridos na lista

    cout<<"quantidade de elementos na lista: "<<lista1.contar(); //mostra a quantidade de elementos
  return 0;
}