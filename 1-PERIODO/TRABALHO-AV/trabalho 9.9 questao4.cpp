#include<iostream>
#include<locale.h>
using namespace std;
int main(){
	setlocale(LC_ALL,"portuguese");
	float salto, total,media,maiorM=-52,menorM=1000;
	int cont,menor=0,maior=0;
	for(int i=0; i<3; i++){
		total=0;
		cout<<"atleta "<<i+1<<endl;
		for( int j=0; j<5;j++){
			cout<<"Qual a distancia do salto "<<j+1<<endl;
			cin>>salto;
			total=total+salto;	
		}
		media= total/5;
	    cout<<" a media sera:"<<media<<endl;
	    
	    if(media>maiorM){
	    	maiorM=media;
	    	maior=i+1;
		}
		if(media<menorM){
			menorM=media;
			menor=i+1;
		}
	}
    cout<<"A maior média é do atleta: "<<maior<<endl;
    cout<<"A menor média é do atleta: "<<menor<<endl;
	
	return 0;
}