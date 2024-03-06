
//? find the second largest element in the given array

#include<iostream>
using namespace std;
int main(){
  //? initiate array elements
  int arr[10],size;
  cout<<"enter size of array: ";
  cin>>size;
  cout<<"enter array element: ";
  for(int i=0;i<size;i++){
    cin>>arr[i];
  }

  //? to find the largest element in the given array
  int max=0;
  for(int i=0;i<size;i++){
    if(arr[max]<arr[i]){
      max=i;
    }
  }

  //? initiating 0 to largest value
  arr[max]=0;

  //? again finding the largest value after initiating the first largest value
  for(int i=0;i<size;i++){
    if(arr[max]<arr[i]){
      max=i;
    }
  }
  cout<<arr[max];
}