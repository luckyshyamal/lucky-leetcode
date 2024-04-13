#include<iostream>
using namespace std;

//count function
void countSort(int *arr,int n,int pos){

  //finding the frequence of elements positions frequency
  int freq[10]={0};
  for(int i=0;i<n;i++){
    freq[(arr[i]/pos)%10]++;
  }
  //calculating cummulative number
  for(int i=1;i<10;i++){
    freq[i]+=freq[i-1];
  }
  //building the output array
  int output[n];
  for(int i=n-1;i>=0;i--){
    output[--freq[(arr[i]/pos)%10]] = arr[i];
  }
  //copying the output array int original array
  for(int i=0;i<n;i++){
    arr[i]=output[i];
  }
}

//radix function
void radixSort(int *arr,int n){
  int max=arr[0];
  for(int i=0;i<n;i++){
    if(arr[i]>max){
      max = arr[i];
    }
  }
  //to call the count sort by using position
  for(int pos=1;max/pos>0;pos*=10){
    countSort(arr,n,pos);}
}
int main(){
  int arr[]={2,472,568,365,243,68,978,1038};
  int n = sizeof(arr)/sizeof(arr[0]);
  //function calling
  radixSort(arr,n);
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
}
