#include<iostream>
using namespace std;
#include<vector>

void insertionSort(vector<int>&v){
  for(int i=1;i<v.size();i++){
    int curr = v[i];
    int j =i-1;
    while(j>=0 and v[j]>curr){
      v[j+1]=v[j];
      j--;
    }
    v[j+1]=curr;
  }
}

int main(){
  vector<int>v;
  int n;
  cout<<"enter n value: ";
  cin>>n;
  cout<<"enter array element: ";
  for(int i=0;i<n;i++){
    int ele;
    cin>>ele;
    v.push_back(ele);
  }
  insertionSort(v);
  for(int i=0;i<n;i++){
    cout<<v[i]<<" ";
  }
}