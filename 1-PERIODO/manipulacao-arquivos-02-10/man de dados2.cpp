#include<iostream>
#include<string>
#include<fstream>
using namespace std;
int main(){
	ifstream objeto("dados.txt");
	string linha;
	if(objeto.is_open()){
		getline(objeto, linha);
		cout<<linha;
		objeto.close();
	}
	else{
		cout<<"Nao encontrado";
	}
	return 0;
}
