#include<iostream>
using namespace std;

int main(){
	
	int vet[5]={5,8,10,23,42};
	int esq=0, dir=4, proc=8;
	bool encontrado=false;
	while(esq<=dir){
		int meio=(esq+dir)/2;
		cout<<meio<<endl;
		if(proc==vet[meio]){
			cout<<"Achou"<<endl;
			encontrado=true;
			break;
		 
		}
		else if(proc<vet[meio]){
			dir=meio-1;
		}
		else{
			esq=meio+1;
		}
	}
	if(!encontrado){
		cout<<"Nao achou";
	}
	return 0;
}
