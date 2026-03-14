/* WAP to create array collection of integer values for 5 Elements 
   and sort Array values using Quick Sort Algorithm */
   
#include<stdio.h>

void quick_sort(int ar[],int first,int last);
void swap(int *a,int *b);

void main()
{
	int arr[] = {85,16,91,21,5};
	int size,i;
	
	size = sizeof(arr)/sizeof(arr[0]);
	
	printf("\n Array before Sorting = ");
	for(i=0;i<size;i++)
		printf(" %d",arr[i]);
		
	quick_sort(arr,0,size-1);

	printf("\n Array after Sorting = ");
	for(i=0;i<size;i++)
		printf(" %d",arr[i]);		
}
	void swap(int *a,int *b)
	{
		int t;
		t = *a;
		*a = *b; 
		*b = t;
	}

	void quick_sort(int ar[],int first,int last)
	{
		int smallIndex,bigIndex;
		int pivotIndex;
	
		 if (last - first <= 0)
			return;   

		pivotIndex = first;
		smallIndex = first;
		bigIndex = last;

		while(smallIndex < bigIndex)
		{
			while(ar[smallIndex] <= ar[pivotIndex] && smallIndex < last)
				smallIndex++;

			while(ar[bigIndex] > ar[pivotIndex])
				bigIndex--;

			if (smallIndex < bigIndex)
				swap(&(ar[pivotIndex]),&(ar[bigIndex]));
		}
		swap(&(ar[pivotIndex]),&(ar[bigIndex]));
		quick_sort(ar,first,bigIndex-1); // Recursive Function call
		quick_sort(ar,bigIndex+1,last);		
	}
