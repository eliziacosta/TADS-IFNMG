#include<iostream>
#include<string>
using namespace std;
int main(){
	string a,b;
	int ta,tb;
	cout<<"Informe a string"<<endl;
	getline(cin,a);
	cout<<"Informe a string"<<endl;
	getline(cin,b);
	ta=a.size();
	tb=b.size();
	if(ta>tb){
		cout<<"String a maior"<<endl;
	}
	else if(ta<tb){
		cout<<"String b maior"<<endl;
	}
	else{
		cout<<"Iguais"<<endl;
	}
	
	return 0;
}
