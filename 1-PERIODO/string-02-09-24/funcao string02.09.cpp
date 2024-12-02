/*Implemente um programa que simula um editor de texto simples. O usuário poderá inserir,
apagar, copiar, concatenar, e comparar strings. Ofereça um menu de opções para cada uma
dessas operações.*/

#include <iostream>
#include <string>

using namespace std;

int main (){

string tex = "",tex1,copia,text;

int opc,num,fim,comparar;
int comeco = 0;

cout<<"Digite o texto 1 "<<endl;
getline(cin,tex);

cout<<"Editor de texto simples "<<endl
<<"[1] Inserir Texto "<<endl
<<"[2] Apagar texto"<<endl
<<"[3] Copiar texto"<<endl
<<"[4] Concatenar texto "<<endl
<<"[5] Comparar texto "<<endl;
cin>>opc;

if(opc==1){
cout<<"Digite o texto que dejesa inserir em: "<<tex<<"\nTamanho da string: "<<tex.length()<<endl;
cin.ignore();
getline(cin,text);
cout<<"Digite o numero de onde que comecar inserir "<<endl;
cin>>comeco;
tex.insert(comeco,text);
cout<<"Resultado: "<<tex<<endl;

}
else if(opc==2){
cout<<"\nTamanho da string: "<<tex.length()<<endl;
cout<<"Digite o intervalo que deseja apagar tipo de 0 a 1 "<<endl;
cin>>num;
cin>>fim;
tex.erase(num,fim);
cout<<"Resultado: "<<tex<<endl;
}
else if(opc==3){
cout<<"\nTamanho da string: "<<tex.length()<<endl;
cout<<"Digite o intervalo que copiar apagar tipo de 0 a 1 "<<endl;
cin>>num;
cin>>fim;
copia = tex.substr(num,fim);

cout<<"Origial "<<tex<<endl;
cout<<"Resultado "<<copia<<endl;
}
else if(opc==3){
cout<<"Digite o texto que deseja concatenar "<<endl;
cin.ignore();
getline(cin,tex1);
tex += " ";
tex.append(tex1);

cout<<"Resultado: "<<tex<<endl;
}
else if(opc==4){
cout<<"Digite o texto que queira comoarar com o 1 "<<endl;
cin.ignore();
getline(cin,tex1);

comparar = tex.compare(tex1);
tex += " ";

tex.append(tex1);

cout<<"Resultado: "<<tex<<endl;

}
else if(opc==5){
if (comparar == 0 ){
cout<<"Iguais"<<endl;
cout<<tex<<" = "<<tex1<<endl;
}else{
cout<<"Diferentes"<<endl;
cout<<tex<<" != "<<tex1<<endl;
}

}

else{
cout<<"opcao invalida";
}

return 0;
}