#include<iostream>
using namespace std;
int f(int x,int y){
  if(y>x)return f(y,x);
  if(x%y==0)return y;
  f(y,x%y);
  
}
int main(){
  int x=16,y=12;
  int res = f(x,y);
  cout<<res;
}