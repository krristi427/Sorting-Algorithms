import java.util.Arrays;

class CountingSort_Java {

    /**
     * @param toSort -- the Array that needs sorting
     * @param range -- the max number from the input (ex: {1, 5, 8} has a range of 9)
     */

    public static void countingSort(int[] toSort, int range) {

        // The result that will have sorted array
        int[] result = new int[toSort.length];

        // Create a count array to store count of individual characters
        int[] count = new int[range];

        // store count of each character
        for (int value : toSort) {
            count[value] += 1;
        }

        // Change count[i] so that count[i] now contains the sum of the number before
        for (int i = 1; i <= range - 1; i++) {
            count[i] += count[i - 1];
        }

        // Build the output character array
        // To make it stable we are operating in reverse order.
        for (int i = toSort.length - 1; i >= 0; i--) {
            result[count[toSort[i]] - 1] = toSort[i];
            count[toSort[i]] -= 1;
        }

        System.arraycopy(result, 0, toSort, 0, toSort.length);

    }

    public static void main(String[] args) {

        int[] array = {1, 1, 0, 8, 3, 5, 6, 7, 4, 7, 5, 6, 0};
        countingSort(array, 9);
        System.out.println(Arrays.toString(array));
    }
}