//Imprima de 0 a 100, os números de dois em dois.
#include<iostream>
#include<locale.h>
using namespace std;
int main(){
	setlocale(LC_ALL,"portuguese");
	float soma=0;
	
	for(int i=0;i<50;i++){
		soma=soma+2;
		cout<<soma<<endl;
	}	
	
	return 0;
}
