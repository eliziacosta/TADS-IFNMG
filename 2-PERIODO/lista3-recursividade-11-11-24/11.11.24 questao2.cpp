#include<iostream>
using namespace std;
int somaPares(int n){
  if(n==0){
    return n;
  }
  else if(n%2==0){
    return n+somaPares(n-2);
  }
  return somaPares(n-1);

}
int main(){
   cout<<somaPares(10);
  return 0;
}