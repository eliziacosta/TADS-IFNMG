#include<iostream>
#include<locale.h>
using namespace std;
int main(){
	setlocale(LC_ALL,"portuguese");
	float nivel,cont=0,cont1=0,contN=0;
	float media;
	cout<<"Digite o nível da sua satisfação"<<endl
	    <<"[1] Muito insatisfeito"<<endl
	    <<"[2] Insatisfeito"<<endl
	    <<"[3] Mediano"<<endl
	    <<"[4] Bom"<<endl
	    <<"[5] Excelente"<<endl;
	cin>>nivel;
	
	while(nivel>0){
		contN++;
	 cin>>nivel;
	 
	 if(nivel==5){
	 	cont++;
	 }
	 
	 if(nivel==1){
	 	cont1++;
	 }
		
	}    
	cout<<"Insatisfeitos: "<<cont1<<endl;
	cout<<"Excelente: "<<cont<<endl;
	media=contN/cont1;	
	cout<<"Média: "<<media;
	
	return 0;
}
