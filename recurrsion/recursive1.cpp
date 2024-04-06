#include<iostream>
using namespace std;
void f(long long n){
  if(n<1)return;
  f(n-1);
  cout<<n<<" ";
}
int main(){
  long long n;
  cin>>n;
  f(n);
  return 0;
}