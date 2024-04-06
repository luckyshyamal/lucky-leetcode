#include<iostream>
using namespace std;
bool f(int *arr,int idx,int n,int x){
  if(idx==n)return false;
  return (arr[idx]==x)|| f(arr,idx+1,n,x);
}
int main(){
  int arr[]={1,2,3,4,5,6};
  int n=6,x=50;
  bool res = f(arr,0,n,x);
  if(res==0){cout<<"no";}else{cout<<"yes";}
  return 0;
}

