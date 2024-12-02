#include<iostream>
#include<string>
using namespace std;
int main(){
	string nome;
	getline(cin,nome);
	//tamanho da string com size:
	//int tam=nome.size();
	//tamanho da string com length:
	int tam2=nome.length();
	cout<<tam2<<endl;
	return 0;
}
