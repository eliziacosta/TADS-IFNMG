#include<iostream>
#include<locale.h>
#define PERCENTUAL_chico 0.02
#define PERCENTUAL_ze 0.03
using namespace std;
int main (){
	float chico=1.50, ze=1.10;
	int anos=0;
	while(chico>ze){
		chico=chico+PERCENTUAL_chico;
		ze=ze+PERCENTUAL_ze;
		anos++;
	}
	cout<<" Tamanho de chico "<<chico<<endl;
	cout<<" Tamanho de ze "<<ze<<endl;
	cout<<" Serao necessarios "<< anos <<" anos para Ze alcancar Chico."<<endl;
	return 0;
}
