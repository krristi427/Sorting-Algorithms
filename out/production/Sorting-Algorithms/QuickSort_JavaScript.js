

var items;
var n = prompt("Enter number of elements:");    // let the user enter the number of digits he or she wants to insert
if(n){      // if n is not null then only move forward
var s =prompt("Enter the elements in comma seprated form, like - 2,3,4,5");   // let the user enter the required number of digits in a comma seprated manner
items = s.split(",");   // split the input acquired from the user to split it into an array using the "split()" function in javascript
}

// simple swap function that swaps the two functions
function swap(items, leftIndex, rightIndex){
    var temp = items[leftIndex];
    items[leftIndex] = items[rightIndex];
    items[rightIndex] = temp;
}

// parttion function that finds the pivot in the array
function partition(items, left, right) {
    var pivot   = items[Math.floor((right + left) / 2)], //middle element
        i       = left, //left pointer
        j       = right; //right pointer
    while (i <= j) {
        while (items[i] < pivot) {
            i++;
        }
        while (items[j] > pivot) {
            j--;
        }
        if (i <= j) {
            swap(items, i, j); //sawpping two elements
            i++;
            j--;
        }
    }
    return i;
}

// actual function that sorts the array
function quickSort(items, left, right) {
    var index;
    if (items.length > 1) {
        index = partition(items, left, right); //index returned from partition
        if (left < index - 1) { //more elements on the left side of the pivot
            quickSort(items, left, index - 1);
        }
        if (index < right) { //more elements on the right side of the pivot
            quickSort(items, index, right);
        }
    }
    return items;
}
// first call to quick sort
var sortedArray = quickSort(items, 0, items.length - 1);  // call the function quickSort() with required parameters to sort the array
document.write(sortedArray); //prints the sorted array 
