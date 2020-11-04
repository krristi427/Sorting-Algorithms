# Selection Sort implementation in python
Arr = [60, 25, 10, 32, 9] 
  
# Traverse through all array elements 
for i in range(len(Arr)): 
    # Find the min element in remaining unsorted array 
    min_elem = i 
    for j in range(i+1, len(Arr)): 
        if Arr[min_elem] > Arr[j]: 
            min_elem = j 
              
    # Swap the found min element with the first element         
    Arr[i], Arr[min_elem] = Arr[min_elem], Arr[i] 
  
# Driver code 
print ("Sorted array: ") 
for i in range(len(Arr)): 
    print("%d" % Arr[i]), 
