
//! Cpp program to sort all even element to left and odd to right

#include<iostream>
#include<vector>
using namespace std;

//? function to swap array element if left is odd and right is even

void swap_ele(vector<int> &v ){
  int left=0;
  int right=v.size()-1;
  while(left<right){
    if(v[left]%2==1&&v[right]%2==0){
      swap(v[left],v[right]);
      left++;
      right--;
    }
    if(v[left]%2==0){
      left++;
    }
    if(v[right]%2==1){
      right--;
    }
      
  }
}

//? main function

int main(){

  //? initiate array elements
  vector <int> v;
  int n;
  cout<<"enter number of array element: ";
  cin>>n;
  cout<<"enter array element: ";
  for(int i=0;i<n;i++){
    int element;
    cin>>element;
    v.push_back(element);
  }
  for(int ele:v){
    cout<<ele<<" ";
  }
  //? function calling
  swap_ele(v);

  //? print after shorted
  cout<<endl<<"array after shorted: ";
  for(int ele:v){
    cout<<ele<<" ";
  }
}