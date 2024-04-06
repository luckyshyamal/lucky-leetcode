#include<iostream>
using namespace std;
int f(int n){
  if(n>=0 and n<=9)return n;
  return f(n/10) + (n%10);
}
int main(){
  int n;
  cout<<"enter a digit: ";
  cin>>n;
  int result = f(n);
  cout<<result;
}