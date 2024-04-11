#include<iostream>
using namespace std;

int partition(int *arr,int first,int last){
  int pivot = arr[last];
  int j=first-1;
  for(int i=first;i<=last-1;i++){
    if(arr[i]<pivot){
      swap(arr[++j],arr[i]);
    }
  }
  swap(arr[j+1],arr[last]);
  return j+1;
}

void quickSort(int *arr,int first,int last){
  if(first>=last)return;
  int pi = partition(arr,first,last);
  quickSort(arr,first,pi-1);
  quickSort(arr,pi+1,last);
}
int main(){
  int arr[]={6,3,9,5,2,8,7};
  int n=7;
  quickSort(arr,0,n-1);
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
}