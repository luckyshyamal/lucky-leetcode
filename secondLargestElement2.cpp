
//? finding the second largest number 
//! METHOD-2

#include<iostream>
using namespace std;

//? function to find larges elements in the array
int largestElementIndex(int arr[],int size){
  int max=0;
  for(int i=0;i<size;i++){
    if(arr[max]<arr[i]){
      max=i;
    }
  }
  return max;
}

//? main function
int main(){

  //?initiating  array elements
  int arr[10],size;
  cout<<"enter size of array: ";
  cin>>size;
  cout<<"enter array element: ";
  for(int i=0;i<size;i++){
    cin>>arr[i];
  }
  //? calling the function to find the first largest element in the array
  int elementIndex = largestElementIndex(arr,size);

  //? initiating 0 or -1 to largest element
  int largestElement=arr[elementIndex];
  for(int i=0;i<size;i++){
    if(arr[i]==largestElement){
      arr[i]=0;
    }
  }

  //? calling the function again to find the second largest element in the array
  int secondIndex=largestElementIndex(arr,size);
  cout<<arr[secondIndex];
  
}
