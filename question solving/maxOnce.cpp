#include<iostream>
#include<climits>
using namespace std;

// Function to find the longest sequence of 1's in a row
// starting from the first column
int getResult(int arr[10][10], int r, int c) {
  int maxOnce = 0;   // Initialize maximum length of a sequence found so far
  int maxOnceCount = -1; // Initialize index of the row containing the maximum length sequence
  // Iterate over the rows
  for(int i=0;i<r;i++) {
    // Iterate over the columns
    for(int j=0;j<c;j++) {
      // If the current element is 1,
      // calculate the length of the sequence in this row
      if(arr[i][j]==1) {
        int num = c-j;
        // If the length is greater than maxOnce,
        // update the maxOnce and the corresponding row index
        if(num>maxOnce) {
          maxOnce = num;
          maxOnceCount = i;
        } 
      }
    }
  }
  // Return the maximum length found
  return maxOnce;
}

int main() {
  int arr[10][10], r, c;
  // User input to initialize the array
  cout<<"enter row and column: ";
  cin>>r>>c;
  cout<<"enter array element: "<<endl;
  for(int i=0;i<r;i++) {
    for(int j=0;j<c;j++) {
      // Store each element of the array in arr[i][j]
      cout<<"arr"<<i+1<<j+1<<": ";
      cin>>arr[i][j];
    }
  }
  // Print the entered array for verification
  for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
      cout<<arr[i][j];
    }
    cout<<endl;
  }

  // Get the result from the getResult function
  int res = getResult(arr,r,c);

  // Print the result
  cout<<res;
}