// C++ implementation of a bubble sort, currently using stack-allocated, fixed-size arrays
#include <iostream>

void swap(int *x,int *y) {
  int t = *x;
  *x=*y;
  *y=t;
}

void bubble_sort(int list[],int n){
  int i,j;
  for(i=0;i<n-1;i++)
    for(j=0;j<n-i-1;j++)
      if(list[j]>list[j+1])
        swap(&list[j],&list[j+1]);
}

int main(){
  int list[] = {10,14,9,5,2,18,7};
  int i,n=sizeof(list)/sizeof(*list);
  bubble_sort(list,n);
  std::cout << "Sorted array is: \n";
  for(i=0;i<n;i++) std::cout << list[i] << " ";
  std::cout << std::endl;
  return 0;
}
