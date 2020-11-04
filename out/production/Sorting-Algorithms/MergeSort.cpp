//Merge Sort
//mrSidSat
#include<iostream>
#define max 30 //define any arbitrary size but greater than size of array
using namespace std;
void merge(int A[],int low,int high,int mid)
{
	int i,j,k,C[max];
	i = low; //index for first part
	j = mid +1;//index for second part
	k = 0;//index for array C
	while((i<=mid) && (j<=high))//merge the two parts in Array C
	{
		if(A[i]<A[j])
		{
			C[k] = A[i++];
		}
		else C[k] = A[j++];
		k++;
	}
	while(i<=mid)
	{
		C[k++] =A[i++];
	}
	while(j<=high)
	{
		C[k++] =A[j++];
	}
	for(i=low,j = 0;i<=high;i++,j++ )//copy content of array C back to array A
	{
		A[i]=C[j];
	}	
}
void mergeSort(int A[],int low,int high)
{
	int mid;
	if(low<high)
	{
		mid = (low+high)/2;
		mergeSort(A,low,mid);
		mergeSort(A,mid+1,high);
		merge(A,low,high,mid);
	}
}
void display(int A[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<A[i]<<" ";
	}
}
int main()
{
	int n;
   cout << "Enter the number of elements: ";
   cin >> n;
   int arr[n];     //create an array with given number of elements
   cout << "Enter elements:" << endl;
   for(int i = 0; i<n; i++) {
      cin >> arr[i];
   }
   mergeSort(arr, 0, n-1);     //(n-1) for last index
   cout << "Array after Sorting: ";
   display(arr, n);
}
/*
Time Complexity:T(n) =  O(nlog(n))
*/
//Merge Sort done successfully :)
