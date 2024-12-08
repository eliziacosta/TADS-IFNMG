#include<iostream>
using namespace std;

int main(){
	int vet[4]={89,40,4,20};
	int procurado=41;
	bool achou=false;
	for(int i=0;i<4;i++){
		if(vet[i]==procurado){
			cout<<"Achou";
			achou=true;
		}
	}
	
	if(!achou){
		cout<<"Nao existe";
	}
	
	return 0;
}
