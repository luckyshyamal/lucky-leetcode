#include<iostream>
using namespace std;

// The program initializes a 2D array with some non-zero values and prints out the
// non-zero values in a new 2D array along with their coordinates
int main() {
  int arr[10][10] = {{0,0,3,0},{0,1,0,0},{0,0,0,2}}; // 2D array with some non-zero values
  int size = 0; // variable to store the number of non-zero elements in the 2D array

  // Iterate through the 2D array and count the number of non-zero elements
  for(int i=0;i<3;i++) {
    for(int j=0;j<4;j++) {
      if(arr[i][j]!=0) {
        size++;
      }
    }
  }

  int new_matrix[3][size]; // 2D array to store the non-zero elements along with their coordinates
  int k=0; // counter to keep track of the index in the new 2D array

  // Iterate through the 2D array and store the non-zero elements along with their coordinates
  // in the new 2D array
  for(int i=0;i<3;i++) {
    for(int j=0;j<4;j++) {
      if(arr[i][j]!=0) {
        new_matrix[0][k] = i; // store the row number
        new_matrix[1][k] = j; // store the column number
        new_matrix[2][k] = arr[i][j]; // store the non-zero value
        k++;
      }
    }
  }

  // Print the non-zero elements along with their coordinates
  for(int i=0;i<3;i++) {
    for(int j=0;j<size;j++) {
      cout<<new_matrix[i][j]<<" ";
    }
    cout<<endl;
  }
  return 0;
} 