#include<iostream>
using namespace std;
int soma (int n1){
   if(n1==1){
    return 1;
   }
   else{
    return n1+soma(n1-1);
   }


}
int main(){
int n1;
cout<<"digite o valor de n1: "<<endl;
cin>>n1;
 int s=soma(n1);
 cout<<s<<endl;

  return 0;
}