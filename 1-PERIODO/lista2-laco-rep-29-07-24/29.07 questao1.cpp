#include<iostream>
using namespace std;
int main(){
	int num,mult;
	cout<<"Digite um numero positivo"<<endl;
	cin>>num;
	mult=num;
	
	for(int i=num; i>0; i--){
		
		mult=mult*i;
		cout<<"o fatorial e "<<mult<<endl;
		
	}
	
	return 0;
}
