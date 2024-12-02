#include<iostream>
#include<string>
using namespace std;
int main(){
string per[5]={"Voce tem febre?","Esta com tosse seca?","Sente dificuldade para respirar?","Perdeu o olfato ou paladar?","Esta com dores no corpo?"};
int res,cont=0;

for (int i = 0; i < 5; i++){
    cout<<per[i]<<endl;
    cout<<"[1] para Sim, [0] para Nao"<<endl;
    cin >>res;

    if(res==1){
    cont++;
    }

}

if(cont>=0 && cont<=1){
    cout<<"Sintomas leves,monitorar"<<endl;
}
else if(cont>=2 && cont<=3){
    cout<<"Sintomas moderados,considerar um teste de COVID-19"<<endl;
}
else if(cont>=4 && cont<=5){
    cout<<"Sintomas graves,buscar orientacao medica imediatamente"<<endl;
}

    return 0;
}