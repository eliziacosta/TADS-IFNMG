#include<iostream>
#include<math.h>
using namespace std;

int main() {
    float massaI, massA, massaF=0.5;
    int tempo= 0, horas, minutos, segundos;
    cout<<"qual a massa inicial?"<<endl;
    cin>>massaI;
    massA=massaI;
    while (massA>=massaF) {
        massA=massA/2;
        tempo=tempo+50; 
    }
	horas=tempo/3600;
    minutos=(tempo%3600)/60;
    segundos=tempo%60;
	cout<<"Massa inicial:"<<massaI<<endl;
    cout<<"Massa final:"<<massA<<endl;
    cout<<"Tempo necessario: "<<endl;
    cout<<horas<<"horas"<<endl;
    cout<<minutos<<"minutos"<<endl;
    cout<<segundos<<"segundos"<<endl;
    return 0;
}