class Insertionsort {
    static void insertionSort(int[] toSort)  {
        for (int i = 1; i < toSort.length; i++) {
            int key = toSort[i];
            int j = i - 1;
            while (j >= 0 && toSort[j] > key) {
                toSort[j + 1] = toSort[j];
                j = j - 1;
            }
            toSort[j + 1] = key;
        }
    }

    public static void main(String[] args) {
        int[] arr ={12,3,7,9,2};            //Initial array
        insertionSort(arr);
        System.out.println("Printing all elements");
        for (int value : arr) System.out.print(value + " ");

    }
}
