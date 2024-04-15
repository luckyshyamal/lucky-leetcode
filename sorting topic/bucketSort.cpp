#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

void bucketSort(float *arr,int n){

  //creat a bucket of size n
  vector<vector<float>>bucket(n,vector<float>());

//insert element into bucket
  for(int i=0;i<n;i++){
    int idx = arr[i]*n;
    bucket[idx].push_back(arr[i]);
  }

//sort individual buckets
  for(int i=0;i<n;i++){
    sort(bucket[i].begin(),bucket[i].end());
  }

  //combine allelement from bucket
  int k=0;
  for(int i=0;i<n;i++){
    for(int j=0;j<bucket[i].size();j++){
      arr[k++]=bucket[i][j];
    }
  }

}

int main(){
  float arr[]={9,8,7,6,5,4,3,2,1};
  int n = sizeof(arr)/sizeof(arr[0]);
  bucketSort(arr,n);
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
}