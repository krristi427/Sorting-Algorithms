package main

import "fmt"

func bubbleSort(s []int) []int {
	n := len(s)
	for i := 0; i < n; i++ {
		for j := 0; j < (n - i - 1); j++ {
			if s[j] > s[j+1] { s[j], s[j+1] = s[j+1], s[j] }
		}
	}
	return s
}

func main() {
  fmt.Printf("Sorted array is: %v\n", bubbleSort([]int{10, 14, 9, 5, 2, 18, 7})) // expected: 2,5,7,9,10,14,18
}
