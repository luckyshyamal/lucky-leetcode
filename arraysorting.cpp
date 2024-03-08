
// sort an array consisting of only 0s and 1s

#include<iostream>
using namespace std;
int main(){
  //initiating array element any variables
  int n,arr[10],count=0;
  cout<<"enter size of array: ";
  cin>>n;
  cout<<"enter array element: ";
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }

  // count no. of 0s in the array
  for(int i=0;i<n;i++){
    if(arr[i]==0){
      count+=1;
    }
  }

  // add 0s in the array 
  for(int i=0;i<count;i++){
    arr[i]=0;
  }

  // add 1s in the array
  for(int i=count;i<n;i++){
    arr[i]=1;
  }

  // print array
  cout<<"array after sorted: ";
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
}