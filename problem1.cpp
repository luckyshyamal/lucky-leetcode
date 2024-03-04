// leetCode problem 1 (two sum)
#include<iostream>
using namespace std;
int main(){
  int arr[100],target,n;
  cout<<"enter size of array: ";
  cin>>n;
  cout<<"enter array element: ";
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  cout<<"enter a target: ";
  cin>>target;
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      if(arr[i]+arr[j]==target){
        cout<<i<<","<<j<<endl;
      }
    }
  }
}
