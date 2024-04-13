#include<iostream>
using namespace std;

void countSort(int *arr,int n){
  //finding max element
  int max = arr[0];
  for(int i=0;i<n;i++){
    if(arr[i]>max){
      max = arr[i];
    }
  }
  //finding frequency of element
  int freq[10] = {0};
  for(int i=0;i<n;i++){
    freq[arr[i]]++;
  }
  //finding cumulative frequency of freq array
  for(int i=1;i<=max;i++){
    freq[i]+=freq[i-1];
  }
  //building the output array
  int output[n];
  for(int i=n-1;i>=0;i--){
    output[--freq[arr[i]]] = arr[i];
  }
  //copying output arr to original array
  for(int i=0;i<n;i++){
    arr[i]=output[i];
  }
}

int main(){
  int arr[]={1,2,3,4,5,6,7};
  int n=sizeof(arr)/sizeof(arr[0]);
  countSort(arr,n);
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
}