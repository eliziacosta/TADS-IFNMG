#include<iostream>
#include<string>
using namespace std;
int main(){
	string nome, copia="";
	cout<<"Copia"<<copia<<endl;
	getline(cin,nome);
	//copiar string:
	copia.assign(nome);
	cout<<"String original: "<<nome<<endl;
	cout<<"String copia: "<<copia<<endl;
	
	return 0;
}
