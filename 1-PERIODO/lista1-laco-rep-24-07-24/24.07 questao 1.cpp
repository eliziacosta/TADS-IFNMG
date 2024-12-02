#include<iostream>
#include<locale.h>
using namespace std;
int main(){
	setlocale(LC_ALL,"portuguese");
	
	for(int i=1; i<=50; i++){
		cout<<"Levando "<<i<<" voce pagara: "<<0.18*i<<endl;
	}
	
	return 0;
}
