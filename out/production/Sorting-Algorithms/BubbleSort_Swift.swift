func bubbleSort(_ s: inout [Int]) {
    guard s.count > 1 else {return}
    let n = s.count
    for i in 0..<n {
        for j in 0..<n-i-1 {
            if s[j] > s[j + 1] { s.swapAt(j + 1, j) }
        }
    }
}


var arr = [10, 14, 9, 5, 2, 18, 7]
bubbleSort(&arr)
print("Sorted array is: \(arr)") // expected: 2,5,7,9,10,14,18
