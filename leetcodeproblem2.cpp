#include<iostream>
using namespace std;
int main(){
  int arr1[10],arr2[10],n;
  cout<<"enter size of array: ";
  cin>>n;
  cout<<"enter value for array 1: "<<endl;
  for(int i=0;i<n;i++){
    cin>>arr1[n];
  }
  cout<<"enter value for array2: "<<endl;
  for(int i=0;i<n;i++){
    cin>>arr2[i];
  }
  int sum_arr[10];
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      sum_arr[i]=arr1[i]+arr2[j];
    }
  }
  for(int ele:sum_arr){
    cout<<ele<<" ";
  }
}