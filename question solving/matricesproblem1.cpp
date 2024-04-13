
//multiplication of two matrices

#include<iostream>
using namespace std;
int main(){
  // Define arrays: arr1, arr2, and result
  int arr1[100][100],arr2[100][100],res[100][100],r1,r2,c1,c2;

   // Get array dimensions
  cout<<"enter no. of row and column in array 1: ";
  cin>>r1>>c1;
  // Get array 1 elements
  cout<<"enter array1 element: "<<endl;
  for(int i=0;i<r1;i++){
    for(int j=0;j<c1;j++){
      cout<<"arr"<<i+1<<j+1<<": ";
      cin>>arr1[i][j];
    }
  }

  // Get array 2 dimensions
  cout<<"enter no. of row and column in array 2: ";
  cin>>r2>>c2;

  // Check if the dimensions of array 2 match the number of columns of array 1
  if(c1!=r2){
    cout<<"\n!!Error:";
  }


  else{
      // Get array 2 elements
    cout<<"enter array2 element: "<<endl;
    for(int i=0;i<r2;i++){
      for(int j=0;j<c2;j++){
        cout<<"arr"<<i+1<<j+1<<": ";
        cin>>arr2[i][j];
      }
    }
    // Multiply the arrays and store the result in the 'res' array
     for(int i=0;i<r1;i++){
      for(int j=0;j<c2;j++){
        res[i][j]=0;
        for(int k=0;k<c1;k++){
          res[i][j]+=arr1[i][k]*arr2[k][j];
        }
      }
    }

  // Print the resulting array
  for(int i=0;i<r1;i++){
    for(int j=0;j<c2;j++){
      cout<<res[i][j]<<" ";
    }
    cout<<endl;
  }

  }
  
  return 0;
    
   
}