#include<iostream>
#include<climits>
using namespace std;

int getResult(int arr[10][10],int r,int c){
  int maxOnce = 0;
  int maxOnceCount = -1;
  for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
      if(arr[i][j]==1){
        int num = c-j;
        if(num>maxOnce){
          maxOnce = num;
          maxOnceCount = i;
        } 
      }
    }
  }
  return maxOnce;
}

int main(){
  int arr[10][10],r,c;
  cout<<"enter row and column: ";
  cin>>r>>c;
  cout<<"enter array element: "<<endl;
  for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
      cout<<"arr"<<i+1<<j+1<<": ";
      cin>>arr[i][j];
    }
  }
  for(int i=0;i<r;i++){ 
    for(int j=0;j<c;j++){
      cout<<arr[i][j];
    }
    cout<<endl;
  }
  

  int res = getResult(arr,r,c);

  cout<<res;
}