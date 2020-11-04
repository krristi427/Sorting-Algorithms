#include <iostream>
#include <algorithm> 
using namespace std;

// function to print an array
void displayArray(int arr[], int size) 
{
    for (int i = 0; i < size; i++) {
        cout << arr[i] << "\t"; 
    }
    cout << endl;
} 
   
void selectionSort(int array[], int size) {
  for (int step = 0; step < size - 1; step++) {
    int min_idx = step;
    for (int i = step + 1; i < size; i++) {
      // To sort in descending order, We can change > to < in this line.
      // We select the minimum element in each loop.
      if (array[i] < array[min_idx])
        min_idx = i;
    }
    // Put the minimum in the correct location
    swap(array[min_idx], array[step]);
  }
}

// Sample input
int main() { 
    int arr[] = {12, 23, 3, 43, 51, 35, 19, 45}; 
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << "Our Input array" << endl;
    displayArray(arr, n);
    selectionSort(arr, n); 
    cout << "Array sorted with selction sort" << endl; 
    displayArray(arr, n); 
}
