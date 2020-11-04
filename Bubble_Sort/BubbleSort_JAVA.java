class Solution {  //Name of the class is Solution and it is public

    static void bubbleSort(int[] toSort) {

        for(int i = 0; i < toSort.length - 1; i++) {
            for(int j = 0; j < toSort.length - 1 - i; j++) {
                if(toSort[j] > toSort[j + 1]) {
                    swap(toSort, j, j + 1);
                }
            }
        }
    }

    static void swap(int[] array, int first, int second) {
        int temp = array[first];
        array[first] = array[second];
        array[second] = temp;
    }

    public static void main(String[] args) {
        int[] arr ={8, 7, 6, 5, 4, 3, 2};
        bubbleSort(arr);
        System.out.println("\nAfter sorting");
        for (int value : arr) System.out.print(value + " ");
    }
}