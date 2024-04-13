#include <iostream>
#include <vector>
using namespace std;

// Function to generate the Pascal's triangle with n rows
vector<vector<int>> pascalTriangle(int n) {
  // Create a 2D vector with n rows
  vector<vector<int>> triangle(n);

  // Initialize each row with a 1D vector of size i+1
  for(int i=0;i<n;i++){
    triangle[i].resize(i+1);

   
    for(int j=0;j<i+1;j++){

      // Initialize the first and last elements of each row to 1
      if(j==0||j==i){
        triangle[i][j]=1;
      }

    // Calculate the remaining elements of each row
      else{
        triangle[i][j]=triangle[i-1][j] + triangle[i-1][j-1];
      }
    }
  }


  // Return the 2D vector representing the Pascal's triangle
  return triangle;
}

int main() {
  // Prompt the user to enter a value for n
  int n;
  cout << "Enter the number of rows in the Pascal's triangle: ";
  cin >> n;

  // Call the pascalTriangle function to generate the triangle
  vector<vector<int>> v = pascalTriangle(n);

  // Print the Pascal's triangle
  for (int i = 0; i < v.size(); i++) {
    for(int j=0;j<v.size()-i;j++){
      cout<<" ";
    }
    // Print each row with a space between each element and a newline character at the end of each row
    for (int j = 0; j < v[i].size(); j++) {
      cout << v[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}