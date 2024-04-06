#include<iostream>
using namespace std;
void f(int *arr,int idx,int n){
  if(idx == n)return;
  cout<<arr[idx]<<" ";
  f(arr,idx+1,n);

}
int main (){
  int arr[10]={1,2,3,4,5,6};
  f(arr,0,6);

}