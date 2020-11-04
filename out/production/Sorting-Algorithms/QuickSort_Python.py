
def QuickSort(v):
    # Check array size
    if len(v) <= 1:
        return v
    # Select the first one
    pivot = v[0]
    # Select the equals
    same = [x for x in v if x == pivot]
    # Separate by pivot
    smallers = [x for x in v if x < pivot]
    biggers = [x for x in v if x > pivot]
    # Return each part sorted.
    return QuickSort(smallers) + same + QuickSort(biggers)

# Quick Sort implementation in python
Arr = [60, 25, 10, 32, 9] 

Sorted = QuickSort(Arr)
# Driver code 
print ("Sorted array: ") 
for i in Sorted: 
    print("%d" % i), 
