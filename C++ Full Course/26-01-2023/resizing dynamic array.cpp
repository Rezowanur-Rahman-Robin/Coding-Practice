#include <iostream>
using namespace std;

// printArray function
void printArray(int arr[], int size) {
  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}

// main function
int main() {
  // Initialize variable size
  int size = 5;
  // Create Array
  int * Arr = new int[size];
  // Fill elements of an array
  for (int i = 0; i < size; i++) {
    Arr[i] = i;
  }
  // Call printArray function
  printArray(Arr, size);
  // Create new array
  int * ResizeArray = new int[size + 2];
  // Copy elements in new arary
  for (int i = 0; i < size; i++) {
    ResizeArray[i] = Arr[i];
  }
  // Delete old array
  delete[] Arr;
  // Pointer Array will point to ResizeArray
  Arr = ResizeArray;
  // Store new values
  Arr[size] = 90;
  Arr[size + 1] = 100;
  // Call printArray function
  printArray(Arr, size + 2);
}
