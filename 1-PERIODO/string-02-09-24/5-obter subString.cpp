#include<iostream>
#include<string>
using namespace std;
int main(){
	 string a;
	 getline(cin, a);
	 
	 //obter subString
	string partida=a.substr(2,5);
	cout<<"Valor final "<<partida<<endl;
	 
	return 0;
}
