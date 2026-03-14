/* WAP to create arrray collection of 5 Integer values and sort them
   using insertion Sort Algorithm */
   
#include<stdio.h>

void main()
{
	int arr[] = {5,3,91,41,2};
	int i;
	int key,k;
	
	printf("\n Array Collection = ");
	for(i=0;i<=4;i++)
	{
		printf(" %d",arr[i]);
	}
	
	/* Insertion Sort Algorithm */
	
	for(i=1;i<5;i++)
	{
		key=arr[i]; //3
		k=i-1; //0
		
		while(arr[k]>key)
		{
			arr[k+1]=arr[k];
			k--;
			
			if(k==-1)
				break;
		}
		arr[k+1]=key;
	}

	printf("\n Sorted Array Collection = ");
	for(i=0;i<=4;i++)
	{
		printf(" %d",arr[i]);
	}	
}
