
//? find the unique elements from the array

#include<iostream>
using namespace std;
int main(){
  //? initiate the array
  int arr[10],n;
  cout<<"enter size of array: ";
  cin>>n;
  cout<<"enter array element: ";
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }

  //? find the same elements in the array and turn them to 0
  for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
      if(arr[i]==arr[j]){
        arr[i]=arr[j]=0;
      }
    }
  }

  //? check weather elements are 0 or nat not 
  //? if don't print the element 
  cout<<"unique elements are: ";
  for(int i=0;i<n;i++){
    if(arr[i]!=0){
      cout<<arr[i]<<" ";
    }
  }
}