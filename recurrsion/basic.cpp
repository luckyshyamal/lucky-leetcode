#include<iostream>
using namespace std;

int rowFinding(int arr[10][10],int r,int c){
  int minValue = 0;
  int minRow = -1;
  for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
      if(arr[i][j]==1){
        int colCount = c-j;
        if(minValue<colCount){
          minValue = colCount;
          minRow = i;
        }
      }
    }
  }
  cout<<minValue<<" "<<minRow<<endl;
  return minValue;
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
  int res = rowFinding(arr,r,c);
  cout<<res;
}