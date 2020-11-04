#python program for bubble sort
def bubbleSort(arr):
    l = len(arr)
    for i in range(l-1):
        for j in range(0,l-i-1):
            # Swap if the element found is greater than the next element 
            if arr[j] > arr[j+1]:
                arr[j], arr[j+1] = arr[j+1],  arr[j]  


arr=[10,14,9,5,2,18,7]

bubbleSort(arr)
#sorted array = 2,5,7,9,10,14,18
print("Sorted array is: {arr}") 
