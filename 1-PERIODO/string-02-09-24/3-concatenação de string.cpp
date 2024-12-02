#include<iostream>
#include<string>
using namespace std;
int main(){
	 string primeiroNome, segundoNome;
	 getline(cin, primeiroNome);
	 getline(cin,segundoNome);
	 //concatenacao de string 
	 primeiroNome.append(segundoNome);//a quem chama o método
	 cout<<"String 1"<<primeiroNome<<endl;
	 cout<<"String 2"<<segundoNome<<endl;
	 
	return 0;
}
