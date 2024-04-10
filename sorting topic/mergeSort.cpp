#include<iostream>
using namespace std;

/**
 * Function to merge two sorted subarrays of arr[].
 * The first subarray is arr[lb..mid] and the second one is arr[mid+1..ub].
 * After merging, the subarrays are in sorted order.
 * @param arr int array
 * @param lb int lower bound of the first subarray
 * @param mid int middle point of the original array
 * @param ub int upper bound of the second subarray
 */

void merge(int *arr, int lb, int mid, int ub) {
  int n1 = mid - lb + 1; // number of elements in the first subarray
  int n2 = ub - mid;     // number of elements in the second subarray

  // Create temporary arrays a and b
  int a[n1], b[n2];

  // Copy data to temporary arrays a and b
  for (int i = 0; i < n1; i++) {
    a[i] = arr[lb + i];
  }
  for (int i = 0; i < n2; i++) {
    b[i] = arr[mid + 1 + i];
  }

  int i = 0, j = 0, k = lb; // Initialize indices of a, b, and arr

  /**
   * Merge the temporary arrays back into arr[].
   * The lower and upper bounds of the merged subarray are lb and ub, respectively.
   */

  while (i < n1 && j < n2) {
    if (a[i] < b[j]) {
      arr[k++] = a[i++];
    } else {
      arr[k++] = b[j++];
    }
  }

  // Copy the remaining elements of a, if any
  while (i < n1) {
    arr[k++] = a[i++];
  }

  // Copy the remaining elements of b, if any
  while (j < n2) {
    arr[k++] = b[j++];
  }
}

/**
 * Function to implement divide-and-conquer merge sort algorithm.
 * It recursively divides the input array into two halves, sorts them, and merges them.
 * @param arr int array
 * @param lb int lower bound of the array
 * @param ub int upper bound of the array
 */

void mergeSort(int *arr, int lb, int ub) {
  if (lb >= ub) return; // Return if the array has 0 or 1 elements

  int mid = (lb + ub) / 2; // Calculate the middle point

  // Recursively sort the two halves
  mergeSort(arr, lb, mid);
  mergeSort(arr, mid + 1, ub);

  // Merge the sorted halves
  merge(arr, lb, mid, ub);
}

/**
 * Main function to test the mergeSort function.
 * @return int 0 on successful execution
 */
int main() {
  int arr[] = {5, 3, 6, 7, 1, 9, 8, 4};

  // Call mergeSort to sort the array
  mergeSort(arr, 0, 7);

  // Print the sorted array
  for (int i = 0; i < 8; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;

  return 0;
}