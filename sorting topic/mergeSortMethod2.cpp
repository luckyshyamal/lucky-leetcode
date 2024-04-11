#include<iostream>
using namespace std;
void merge(int *arr,int lb,int mid,int ub){
  int i=lb;
  int j=mid+1;
  int k=0;
  int temp[ub-lb+1];
  while(i<=mid and j<=ub){
    if(arr[i]<arr[j]){
      temp[k++]=arr[i++];
    }else{
      temp[k++]=arr[j++];
    }
  }
  while(i<=mid){
    temp[k++]=arr[i++];
  }
  while(j<=ub){
    temp[k++]=arr[j++];
  }
  for(k=lb;k<=ub;k++){
    arr[k]=temp[k-lb];
  }
}

void mergeSort(int *arr,int lb,int ub){
  if(lb>=ub)return;
  int mid = (lb+ub)/2;
  mergeSort(arr,lb,mid);
  mergeSort(arr,mid+1,ub);

  merge(arr,lb,mid,ub);
}
int main(){
  int arr[]={5,4,2,7,1,9,6,3};
  mergeSort(arr,0,7);

  for(int i=0;i<8;i++){
    cout<<arr[i]<<" ";
  }
}