# Shell Sort
![gif](https://lamfo-unb.github.io/img/Sorting-algorithms/Shell_Sort_Algorithm.gif)

### A Shell Sort works as follows:
Shell sort is an algorithm that first sorts the elements far apart from each other and successively reduces the interval between the elements to be sorted.

### Pseudocode Example:
```
input
foreach element in input
{
    for(i = gap; i < n; i++)
    {
        temp = a[i]
        for (j = i; j >= gap and a[j - gap] > temp; j -= gap)
        {
            a[j] = a[j - gap]
        }
        a[j] = temp
    }
}
```

### This is a very common sorting algorithm and can be implemented in pretty much every language.<br>Check out the rest of this folder to see some examples of it at work!

