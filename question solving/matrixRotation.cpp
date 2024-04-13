#include<iostream> // include statement for input/output functions
using namespace std;

int main() { // main function
  int arr[10][10], r, c; // declaration of 2D array and row and column variables

  // Prompting user to enter row and column for a square matrix
  cout << "note! enter row and column for square matrix: " << endl;
  cout << "enter row and column: " << endl;

  // Input for row and column
  cin >> r >> c;

  // Checking if the entered matrix is square or not
  if (r != c) {
    cout << "Row and Column is not same " << endl;
  }

  // Taking input and displaying original matrix if the entered matrix is square
  else {
    for (int i = 0; i < r; i++) { // loop for rows
      for (int j = 0; j < c; j++) { // loop for columns
        cout << "arr" << i + 1 << j + 1 << ": "; // prompt for input
        cin >> arr[i][j]; // taking input in 2D array
      }
    }

    cout << "original matrix: " << endl;
    for (int i = 0; i < r; i++) { // loop for rows
      for (int j = 0; j < c; j++) { // loop for columns
        cout << arr[i][j] << " "; // displaying original matrix
      }
      cout << endl;
    }

    // Displaying matrix after 90 degree rotation
    cout << "matrix after 90deg rotation: " << endl;
    for (int i = 0; i < r; i++) { // loop for rows
      for (int j = c - 1; j >= 0; j--) { // loop for columns in reverse order
        cout << arr[j][i] << " "; // displaying matrix after 90 degree rotation
      }
      cout << endl;
    }
  }
}