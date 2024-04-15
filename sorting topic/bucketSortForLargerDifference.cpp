#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
void bucketSort(float *arr,int n){
  vector<vector<float>>bucket(n,vector<float>());
  int max=arr[0],min=arr[0];
  for(int i=0;i<n;i++){
    if(arr[i]>max){
      max = arr[i];
    }
    if(arr[i]<min){
      min = arr[i];
    }
  }
  float range = (max-min)/n;
  for(int i=0;i<n;i++){
    int idx  = (arr[i]-min)/range;
    if (idx >= n) idx = n - 1;
    bucket[idx].push_back(arr[i]);
  }

  for(int i=0;i<n;i++){
    sort(bucket[i].begin(),bucket[i].end());
  }

  int k=0;
  for(int i=0;i<n;i++){
    for(int j=0;j<bucket[i].size();j++){
      arr[k++] = bucket[i][j];
    }
  }
}
int main(){
  float arr[]={0.13,0.45,0.12,1.89,0.75,0.63,8.85,0.39};
  int n = sizeof(arr)/sizeof(arr[0]);
  bucketSort(arr,n);
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
}