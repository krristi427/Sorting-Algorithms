# Bubble Sort         
![gif](https://upload.wikimedia.org/wikipedia/commons/0/06/Bubble-sort.gif)

### A bubble sort works as follows:

* Compares first 2 numbers in array. Will swap them if the number on the left is greater than the number on the right.
* Goes onto the next 2 numbers, does the same for the rest. Compare, check if larger and switch if needed.
* Now we know that the final number in the array is the largest.
* We repeat the process all again, slowly confirming that we have the largest number after swapping and reaching the end of the array.

### Pseudocode Example:
```
FOR i FROM length-2 TO 0 STEP -1 DO 
  FOR counter FROM 0 TO i DO 
    IF list[counter ]>list[counter +1] THEN 
      SET temp TO list[counter +1]
      SET list[counter +1] TO list[counter ]
      SET list[counter] TO temp
    END IF 
  END FOR 
END FOR 
```

###Complexity
Notice that in the i-th Iteration of the outer loop, the inner loop will have performed n - 1 - i Comparisons. <br> For n iterations, it will perform n * (n - 1 - i) Comparisons, thus leading to quadratic time-complexity.  


### This is a very common sorting algorithm and can be implemented in pretty much every language.<br>Check out the rest of this folder to see some examples of it at work!

