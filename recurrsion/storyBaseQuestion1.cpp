#include<iostream>
using namespace std;

int f(int *arr,int n,int i){
  if(i==n-1)return 0;
  if(i==n-2)return f(arr,n,i+1) + abs(arr[i]-arr[i+1]);
  return min( f(arr,n,i+1)+abs(arr[i]-arr[i+1]),f(arr,n,i+2)+abs(arr[i]-arr[i+2]));
}
int main(){
  int arr[]={10,30,40,20};
  int n=4;
  cout<<f(arr,n,0);
  return 0;
}