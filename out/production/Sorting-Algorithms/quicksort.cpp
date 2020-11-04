#include <iostream>
#include <algorithm> 
using namespace std;

// We Partition the array by using the last element as the pivot
// partition the array using last element as pivot
int partition (int arr[], int low, int high) { 
    int pivot = arr[high];
    int i = (low - 1);   
    for (int j = low; j <= high- 1; j++) { 
        //if current element is smaller than pivot, increment the low element
        //swap elements at i and j
        if (arr[j] <= pivot) { 
            i++;    // increment index of smaller element 
            swap(arr[i], arr[j]); 
        } 
    } 
    swap(arr[i + 1], arr[high]); 
    return (i + 1); 
} 
   
void quickSort(int arr[], int low, int high) 
{ 
    if (low < high) { 
        //partition the array 
        int pivot = partition(arr, low, high); 
   
        //sort the sub arrays independently 
        quickSort(arr, low, pivot - 1); 
        quickSort(arr, pivot + 1, high); 
    } 
} 
   
void displayArray(int arr[], int size) 
{
    for (int i = 0; i < size; i++) {
        cout << arr[i] << "\t"; 
    }
    cout<<endl;
} 
   
int main() 
{ 
    // Sample input
    int arr[] = {12, 23, 3, 43, 51, 35, 19, 45}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    cout<<"Our Input array"<<endl;
    displayArray(arr,n);
    quickSort(arr, 0, n-1); 
    cout<<"Array sorted with quick sort"<<endl; 
    displayArray(arr,n); 
}