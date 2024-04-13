
//? find the different between the sum of elements at even indices to the sum of elements at the odd indices.

#include<iostream>
using namespace std;
int main(){

  //? initiating arrays
  int arr[100],n;
  cout<<"enter size of array: ";
  cin>>n;
  cout<<"enter array element: ";
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  

  //? finding the sum of even and odd indices
  int evenSum=0,oddSum=0,result;
  for(int i=0;i<n;i++){
   if(i%2==0){
    evenSum+=arr[i];
   }
   else{
    oddSum+=arr[i];
   }
  }
  cout<<"even sum = "<<evenSum<<endl<<"odd sum = "<<oddSum<<endl;


  //? subtracting oddSum to evenSum

  
  result=evenSum-oddSum;
  cout<<"difference between even and odd indices = "<<result;

}