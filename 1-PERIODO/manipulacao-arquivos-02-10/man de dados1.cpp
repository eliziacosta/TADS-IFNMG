#include<iostream>
#include<fstream>
using namespace std;
int main(){
	//criar objeto de escrita
	ofstream objeto; 
	objeto.open("dados.txt");
	if(objeto.is_open()){
		objeto<<"Dinheiro,sossego e paz! E oque? "<<endl;
		objeto.close();
	}
	else{
		cout<<"Nao foi aberto";
	}
	return 0;
}
