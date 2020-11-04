# Insertion Sort       
![gif](https://upload.wikimedia.org/wikipedia/commons/9/9c/Insertion-sort-example.gif)

### An Insertion sort works as follows:

* Make a split between sorted and unsorted items in the array. To sort these numbers we will need to compare the first unsorted number with the numbers in the sorted section. If the unsorted number is smaller than its sorted neighbor, the computer will swap them.
* First we compare 6 and 5. 5 is smaller than 6, therefore. 5 goes behind 6. 
* Next we do the same again. This time with 3. 3 is smaller than 6, it is also smaller than 5. So we insert it at the very back. 6 is going to be compared again.
* This process continues (Comparing front of the sorted with first of the unsorted). 
* When we reach 8. We know that 8 is greater than 6, therefore it takes place as the one in front (The one that gets compared).
* Now we know that the final number in the array is the largest.
* We repeat the process all again, slowly confirming that we have the largest number after swapping and reaching the end of the array.

### Pseudocode Example:
```
FOR index = 1 TO length(list) - 1    
  currentval = list [index]    
  position = index   
  WHILE position > 0 AND (list [position-1] > currentval)        
    list[position] = list [position-1]        
    position -= 1    
  END WHILE
  SET list[position] = currentval
END FOR
```

###Complexity
In the worst-case, the outer loop will run n-times, but the inner one will do n-1 for each of those<br>
Thus leading to a quadratic time complexity. 

### This is a very common sorting algorithm and can be implemented in pretty much every language.<br>Check out the rest of this folder to see some examples of it at work!

