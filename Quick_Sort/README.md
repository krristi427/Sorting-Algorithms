# QuickSort Sort
![gif](https://upload.wikimedia.org/wikipedia/commons/thumb/6/6a/Sorting_quicksort_anim.gif/220px-Sorting_quicksort_anim.gif?)

### A Quick Sort works as follows:
* We look at some item in the array (sometimes the first, some choose the middle). It would be called __pivot__
* Then you compare for smallers, equals and biggers ones, separating each one in respectives subarrays
* Apply the same procedure on each part (smallers/biggers)
* We continue this until all the numbers are sorted!

### Pseudocode Example:
```
QUICKSORT(array):
  IF (array.lenght > 1)
      choose a pivot
      WHILE (there are items left in array):
        IF (item < pivot):
          put item into smallersarray
        ELSE IF (item > piovt):
          put item into biggersarray
        ELSE
          put item into equalsarray
  
  RETURN QUICKSORT(smallersarray) + equalsarray +  QUICKSORT(biggersarray)
```
###Complexity
With each sorted pivot, one effectively cuts the amount of numbers to sort in half <br>
and the 2 newly created parts can run in parallel. This will create a tree-like structure, <br> 
which means the complexity is logarithmic.

### This is one of the best sorting algorithms and can be implemented in pretty much every language.<br>Check out the rest of this folder to see some examples of it at work!

