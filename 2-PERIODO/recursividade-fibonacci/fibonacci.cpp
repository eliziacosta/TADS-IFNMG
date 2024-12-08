#include<iostream>
using namespace std;
int formula(int n){
  if(n==1){
    return 1;
  }
  else if(n==2){
    return 1;
  }
  else{
    return formula(n-1)+ formula(n-2);
   }


}
int main(){
int n;
cout<<"digite o valor: "<<endl;
cin>>n;
cout<<formula(n);

  return 0;
}
