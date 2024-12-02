/*Faça uma função que receba a idade de uma pessoa e retorne a categoria:
"Criança" (0-12), "Adolescente" (13-17), "Adulto" (18-64) ou "Idoso" (65+).*/
#include<iostream>
#include<string>
using namespace std;
string categoria (int idade){

    if(idade>0 && idade<=12){
        return "Crianca";
    }
    else if(idade>=13 && idade<=17){
        return "Adolescente";
    }
    else if(idade>=18 && idade<=64){
        return "Adulto";
    }
    else if(idade>65){
        return "Idoso";
    }
    else{
        return "Idade inexistente";
    }
}
int main(){
    int idade;
    string cat;

    cout<<"digite a idade: "<<endl;
    cin>>idade;
    
    cat = categoria (idade);
    cout<<"sua categoria e: "<<cat<<endl;

    return 0;
}