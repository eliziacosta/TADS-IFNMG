/*Faça uma função do tipo void que escreva na tela a seguinte mensagem: Seja bem-vindo(a), Nome Usuário. A sua função recebe como parâmetro a variável que representa o nome do usuário.*/
#include<iostream>
#include<string>
using namespace std;
void msg (string nome){
    cout<<"Seja bem vindo(a), "<<nome<<endl;
}
int main(){
    string nome;
    cout<<"digite seu nome: "<<endl;
    getline(cin,nome);
    msg(nome);

    return 0;
}