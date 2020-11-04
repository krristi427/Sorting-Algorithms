# Counting Sort       
[You can find a video demonstration here](https://visualgo.net/en/sorting)

### A Counting Sort works as follows:

* Count how many times each element comes up in an array and save it, so that the key <br>
of the occurrences corresponds to the value of occurrences. 
* Update each index, so that the current number = itself + the one before.
* Output the numbers starting from the lowest index and writing them X-times on an array <br>
whereas X stands for how many times a specific element comes up in the occurrence array. 
* Enjoy :))

### Pseudocode Example:
```
count = array of zeros
for x in input do
    count[key(x)] += 1

total = 0
for i in 0, 1, ... k do
    count[i], total = total, count[i] + total

output = array of the same length as input
for x in input do
    output[count[key(x)]] = x
    count[key(x)] += 1 

return output
```

###Complexity
This algorithm depends only on one loop and some reassignment of pointers, which takes linear time. 
