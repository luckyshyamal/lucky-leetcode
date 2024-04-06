#include<iostream>
using namespace std;
#include<vector>
void f(int *arr,int n,int idx,int sum,vector<int>&result){
  if (idx == n){
    result.push_back(sum);
    return;
  }
  f(arr,n,idx+1,sum+arr[idx],result);//pick the ith element
  f(arr,n,idx+1,sum,result);//do not pick the ith element
}

int main(){
  int arr[]={2,4};
  int n=2;
  vector<int> result;
  f(arr,n,0,0,result);
  for(int i=0;i<result.size();i++){
    cout<<result[i]<<" ";
  }
  return 0;
}