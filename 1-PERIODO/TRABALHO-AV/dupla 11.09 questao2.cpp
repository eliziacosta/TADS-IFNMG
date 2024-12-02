/*Crie uma struct chamada Carro que contenha os campos: modelo, ano e preço. Peça ao usuário para
inserir os dados de um carro e, em seguida, exiba uma mensagem indicando se o carro é considerado
novo (menos de 5 anos) ou usado (5 anos a 8 anos), antigo ( de 9 anos para cima).*/
#include<iostream>

#include<string>
using namespace std;
struct Carro{
string modelo;
int ano;
float preco;
};
int main(){
Carro a1;
cout<<"Digide o modelo do carro: "<<endl;
getline(cin, a1.modelo);

cout<<"Digite o ano de tempo do carro: "<<endl;
cin>>a1.ano;

cout<<"Digite o preco: "<<endl;
cin>>a1.preco;

if(a1.ano<5){
cout<<"Carro novo"<<endl;
}
else if(a1.ano>=5 && a1.ano<=8){
cout<<"Carro usado"<<endl;
}
else{
cout<<"Antigo";
}

return 0;
}