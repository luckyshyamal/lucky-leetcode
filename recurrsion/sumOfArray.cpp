#include<iostream>
using namespace std;
int f(int *arr,int idx,int n){
  if(idx == (n-1))return arr[idx];
  return arr[idx]+f(arr,idx+1,n);
}
int main(){
  int arr[]={1,2,3,4,3,84,23,11};
  int n=8;
  int res = f(arr,0,n);
  cout<<res;
}