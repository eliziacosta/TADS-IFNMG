#include<iostream>
using namespace std;
int main(){
    int tab,inicio,final,tot;
    cout<<"Digite o numero que quer ver a tabuada: "<<endl;
    cin>>tab;
    cout<<"digite o numero do inicio da tabuada: "<<endl;
    cin>>inicio;
    cout<<"digite o numero final da tabuada: "<<endl;
    cin>>final;

    while(final<inicio){
		cout<<"o numero final deve ser maior que o numero de inicio,digite outro numero! "<<endl;
		cin>>final;
	}

    for(int i=inicio;i<=final;i++ ){
        tot=tab*i;
        cout<<tab<<" x "<<i<<" = "<<tot<<endl;
    }

    
    return 0;
}