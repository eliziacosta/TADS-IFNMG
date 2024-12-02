#include<iostream>
using namespace std;
int main (){
	
	int valor,fat=1;
	cin>>valor;
	
	for(int i=valor; i>=1; i--){
		
		fat=fat*i;
	}
	
    cout<<"valor: "<<fat;
	
	
	return 0;
}
