#include<iostream>
#include<locale.h>
using namespace std;
int main (){
    setlocale(LC_ALL,"portuguese");
    int num=1;
	float soma=1.0;
    
    cout<<"digite o numero: "<<endl;
    cin>>num;
    
    for(int i=1;i<=num;i++){
    	
	soma+=(1.0/i);
    }
    
    cout<<soma<<endl;
    
   return 0;
}
