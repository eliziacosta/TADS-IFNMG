/*Crie um programa que leia duas strings do teclado e faça a união entre elas.*/
#include<iostream>
#include<string>
using namespace std;
int main(){
string tex,tex1;
cout<<"Digite a primeira string: "<<endl;

getline(cin, tex);
cout<<"Digite a segunda string: "<<endl;
getline(cin,tex1);

tex.append(tex1);
cout<<"String: "<<tex<<endl;

return 0;
}

//b) Crie um programa que apague da posição 1 a 3 de uma string.
#include<iostream>
#include<string>
using namespace std;
int main(){
string tex;
cout<<"digite a string"<<endl;
getline(cin, tex);

tex.erase(1,3);
cout<<"com a posicao apagada fica assim: "<<tex<<endl;

return 0;
}

//c) Crie um programa que compare duas strings e verifique se são iguais.
#include<iostream>

#include<string>
using namespace std;
int main(){
string tex, tex1;
cout<<"digite a primeira string: "<<endl;
getline(cin,tex);
cout<<"digite a segunda string: "<<endl;
getline(cin,tex1);
int resultado=tex.compare(tex1);
if(resultado==1){
cout<<"Iguais"<<endl;
}
else{
cout<<"Diferentes"<<endl;
}
return 0;
}

/*d) Crie um programa que leia o primeiro nome de uma pessoa. Em seguida, faça a leitura do segundo
nome. Concatene as duas strings.*/
#include<iostream>
#include<string>
using namespace std;
int main(){
string tex,tex1;
cout<<"Digite a primeira string: "<<endl;
getline(cin, tex);
cout<<"Digite a segunda string: "<<endl;
getline(cin,tex1);

tex.append(tex1);
cout<<"String: "<<tex<<endl;

return 0;

}