/*Crie uma struct para representar um livro em uma biblioteca. A struct deve conter os campos: título, autor
e ano de publicação. Em seguida, crie um vetor de 5 livros e leia os dados de cada livro. Após isso, exiba
os títulos dos livros publicados após o ano 2000.*/
 #include<iostream>
 #include<string>
 using namespace std;
 struct Livro{
 string titulo;
 string autor;
 int ano;
 };
int main(){
 Livro a1[5];
 for(int i=0;i<5;i++){
 cout<<"livro "<<i+1<<endl;
 cout<<"digite o titulo do livro:"<<endl;
 getline(cin,a1[i].titulo);

 cout<<"digite o autor do livro: "<<endl;
 getline(cin,a1[i].autor);

 cout<<"digite o ano de publicacao: "<<endl;
 cin>>a1[i].ano;
 cin.ignore();
 if(a1[i].ano >2000){
 cout<<a1[i].titulo;
 }

 }

 return 0;
}