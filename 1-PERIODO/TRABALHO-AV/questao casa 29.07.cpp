/*Caso a casa esteja do lado esquerdo, então ela deve ter uma numeração ímpar. Caso esteja do
lado direito, deve ter uma numeração par. Cada casa tem uma distância X do marco. Por
exemplo, a casa de dona Florinda está a 36m do marco da Igreja de Santo Antônio, então, o
número da casa dela será 36, já que está do lado direito. A casa de João de Barro está a 62m do
marco da Igreja de Santo Antônio, no entanto, a casa está do lado esquerdo, logo o número da

casa de João de Barro deve ser 63.*/
#include<iostream>
#include<locale.h>
using namespace std;
int main(){
    setlocale(LC_ALL,"portuguese");
    int lado,distancia;
    cout<<"Digite o lado que a casa esta "<<endl;
    cout<<"[1] Esquerdo "<<endl;
    cout<<"[2] Direito "<<endl;
    cin>>lado;

if ( lado == 1 ){

    cout<<"Digite a distância em relação ao marco "<<endl;
    cin>>distancia;

if ( distancia % 2 == 0 ){
    distancia = distancia + 1;
    cout<<"O número da casa sera: "<<distancia<<endl;
}
else {
    cout<<"O número da casa sera: "<<distancia<<endl;
}
}
else if ( lado == 2){
    cout<<"Digite a distância em relação ao marco "<<endl;
    cin>>distancia;

if ( distancia % 2 == 0 ){
    cout<<"O número da casa sera: "<<distancia;
}
else {
    distancia = distancia + 1;
    cout<<"O número da casa sera: "<<distancia;
}
}
else {
    cout<<"Número invalido"<<endl;
}

return 0;
}