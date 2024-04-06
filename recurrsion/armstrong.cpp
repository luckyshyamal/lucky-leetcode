#include<iostream>
using namespace std;
#include<math.h>
int f(int n,int d){
  if(n==0)return 0;
  return pow((n%10),d)+f(n/10,d);
}
int main(){
  int n=15331,d=0;
  int temp = n;
  while(n!=0){
    n/=10;
    d++;
  }
  int arms = f(temp,d);
  if(arms==temp){
    cout<<"yes";
  }
  else{cout<<"no";}
}