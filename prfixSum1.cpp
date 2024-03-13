
//for an array a,return prefix sum in the same array

#include<iostream>
#include<vector>
using namespace std;

//function for adding
int sum(vector<int>&v){
  for(int i=1;i<v.size();i++){
    v[i]=v[i-1]+v[i];
  }
}
int main(){
  //initiating array elements
  vector<int>v;
  int n;
  cout<<"enter no. of element to enter: ";
  cin>>n;
  cout<<"enter array element: ";

  for(int i=0;i<n;i++){
    int ele;
    cin>>ele;
    v.push_back(ele); 
  }
  //calling function
  sum(v);

  //print array
  for(int i=0;i<n;i++){
    cout<<v[i]<<" ";
  }
}