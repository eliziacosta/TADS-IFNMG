#include<iostream>
using namespace std;
int mdc(int x, int y){
  if(x==y){
    return x;
  }
  else if(x<y){
    return mdc(y,x);
  }
  else{
    return mdc(x-y, y);
  }
}
int main(){
  int x,y;
  cout<<"digite o valor de x :";
  cin>>x;
   cout<<"digite o valor de y :";
  cin>>y;
  int s=mdc(x,y);
 cout<<s<<endl;

  return 0;
}
