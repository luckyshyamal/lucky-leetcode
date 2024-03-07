
//? rotate the given array by k steps

#include<iostream>
using namespace std;
int  main(){
  //?initiating array elements
  int arr[10],n;
  cout<<"enter size of array: ";
  cin>>n;
  cout<<"enter array element: ";
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  //? ask for no. of rotation 
  int k;
  cout<<"enter number of rotation: ";
  cin>>k;
  int emp_arr[n],j=0;
  //? if the rotation no. is greater than array element then find there reminder
  k%=n;

  
  for(int i=n-k;i<n;i++){
    emp_arr[j++]=arr[i];
  }
  for(int i=0;i<n-k;i++){
    emp_arr[j++]=arr[i];
  }
  for(int i=0;i<n;i++){
    cout<<emp_arr[i]<<" ";
  }
}