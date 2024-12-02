#include<iostream>
#include<locale.h>
using namespace std;
int main(){
	setlocale(LC_ALL,"portuguese");
	float soma=0,soma2=0;
	
	for(int i=0;i<25;i++){
		soma=soma+2;
		cout<<soma<<endl;
		soma2+=soma;
	}
	cout<<"a soma dos pares são: "<<soma2<<endl;
	
	return 0;
}
