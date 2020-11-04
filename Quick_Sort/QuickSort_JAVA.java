class QuickSort {
    /**
     * It should be regarded that for this Algorithm the element to the utmost right is chosen as pivot
     * for simplicity reasons
     */
    static int partition(int[] toSort, int low, int high) { //The Method finds the correct position of the pivot and sets it there
        int pivot = toSort[high];
        int i = low - 1;
        for (int j = low; j < high; j++) {
            if (toSort[j] < pivot) {
                i++; 
                swap(toSort, i, j);
            } 
        } 
  
        swap(toSort, i + 1, high);
  
        return i+1; 
    } 
  
    static void sort(int[] arr, int low, int high) { //It will recursively call the partition function for each new partition created
        if (low < high) {
            int partIndex = partition(arr, low, high);
            sort(arr, low, partIndex - 1);
            sort(arr, partIndex + 1, high);
        } 
    }

    //Utility function
    static void swap(int[] array, int first, int second) {
        int temp = array[first];
        array[first] = array[second];
        array[second] = temp;
    }

  
    // Driver program 
    public static void main(String[] args) {
        int[] arr = {10, 7, 8, 9, 1, 5};
        sort(arr,0,arr.length-1);  
        System.out.println("Displaying sorted array");
        for (int value : arr) {
            System.out.print(value + " ");
        }
    } 
} 
