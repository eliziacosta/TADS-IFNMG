/*Crie uma struct chamada Livro, que contenha os campos: título, autor e ano de publicação. Em seguida,
crie uma struct chamada Biblioteca, que contenha os campos nome da biblioteca, localização e um
campo do tipo Livro. Peça ao usuário para inserir os dados de uma biblioteca (nome, localização, título
do livro, autor e ano de publicação) e exiba as informações completas da biblioteca e do livro
armazenado.*/
#include<iostream>
#include<string>
using namespace std;
struct Livro{
string titulo;
string autor;
int ano;

};
struct Biblioteca{
Livro l;
string nome;
string loc;
string tipo;
};
int main(){

Biblioteca b;
cout<<"Digite o nome da biblioteca: "<<endl;
getline(cin,b.nome);
cout<<"Digite a localizacao: "<<endl;

getline(cin,b.loc);
cout<<"digite o titulo do livro: "<<endl;
getline(cin,b.l.titulo);
cout<<"digite o autor do livro: "<<endl;
getline(cin,b.l.autor);
cout<<"Digite o ano do livro: "<<endl;
cin>>b.l.ano;

cout<<"A biblioteca "<<b.nome<<" na localizacao "<<b.loc<<" com o titulo "<<b.l.titulo<< " e o autor
"<<b.l.autor<<"e no ano "<<b.l.ano;

return 0;
}