#include<iostream>
#include<locale.h>
using namespace std;
int main(){
	setlocale(LC_ALL," portuguese");
	int nume,cont=0;

	cout<<" Digite um numero: "<<endl;
	cin>>nume;
	
	for(int i=1;i<=nume; i++){
	
		if(nume%i==0){
			cont++;
			
		}
			
    }
	if(cont==2){
		cout<<"numero primo";
	}
	else{
		cout<<"nao e primo";
	}

	return 0;
}