#include<iostream>
using namespace std;
int  f(int *arr,int idx,int n){
  if(idx ==(n-1))return arr[idx];
  return max(arr[idx],f(arr,idx+1,n));
}
int main(){
  int arr[] = {1,2,4,7,8,3,4,8,6,4,3};
  int n=11;
  int max_val = f(arr,0,n);
  cout<<max_val;
  return 0;
}