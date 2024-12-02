#include<iostream>
#include<string>
using namespace std;
int main(){
	 string a, b;
	 getline(cin,a);
	 getline(cin,b);
	 //comparação de string
	 int resultado=a.compare(b);
	 if(resultado==1){
	 	cout<<"Iguais"<<endl;
	 }
	 else{
	 	cout<<"Diferentes"<<endl;
	 }
	 
	return 0;
}
