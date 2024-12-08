#include<iostream>
using namespace std;
int main(){
 int filhos[6];
 int soma=0.0;
 float media;

 int *p=filhos;

  for(int i=0;i<6;i++){
    cout<<"Digite a quantidade de filhos da familia "<<i+1<<endl;
    cin>>p[i];
    soma=soma+p[i];

  }

  media=soma/6.0;
  cout<<"a media de filhos na comunidade e: "<<media;

  return 0;
}