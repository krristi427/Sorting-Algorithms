pub fn bubble_sort(s: &mut [isize]) {
    let n = s.len();
    for i in 0..n {
		for j in 0..(n - i - 1) {
			if s[j] > s[j+1] {
                s.swap(j, j + 1);
            }
		}
	}
}


fn main() {
    let mut arr = [10, 14, 9, 5, 2, 18, 7];
    bubble_sort(&mut arr);
    println!("Sorted array is: {:?}", arr); // expected: 2,5,7,9,10,14,18
}
