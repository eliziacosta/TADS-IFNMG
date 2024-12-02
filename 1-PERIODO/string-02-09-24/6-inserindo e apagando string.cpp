#include<iostream>
#include<string>
using namespace std;
int main(){
	 string a;
	 getline(cin, a);
	 
	 //inserindo texto
	 
	a.insert(2,"Ola");
	cout<<"Valor final inser��o "<<a<<endl;
	//apagando texto
	
	a.erase(2,4);
	cout<<"Valor final apagando "<<a<<endl;
	
	return 0;
}
