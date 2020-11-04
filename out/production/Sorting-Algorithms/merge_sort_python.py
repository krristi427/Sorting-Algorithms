def MergeSort(lst):
    if len(lst) > 1:
        middle = len(lst)//2
        l = lst[:middle]
        r = lst[middle:]
        
        MergeSort(l)
        MergeSort(r)
        
        i,j,k = 0,0,0
        
        while i < len(l) and j < len(r):
            if l[i] < r[j]:
                lst[k]=l[i]
                i+=1
            else:
                lst[k]=r[j]
                j+=1
            k+=1
            
        while i < len(l):
            lst[k]=l[i]
            i+=1
            k+=1
                 
        while j < len(r):
            lst[k]=r[j]
            j+=1
            k+=1
            
    return lst
                
a= [21,4,32,9,12]
print("given array is: ",a)
a= MergeSort(a)
print("sorted array is: ",a)

