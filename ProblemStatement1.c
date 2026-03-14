/* Sorting a Object array */

#include<stdio.h>

struct Product
{
	int id;
	char title[20];
	float cost;	
};

void main()
{
	int i, j, s, c;
	struct Product t;
	struct Product products[5] = {
		{8415, "Mouse", 900.00f},
		{8942, "Keyboard", 1500.00f},
		{8151, "Speaker", 6000.00f},
		{1152, "Bluetooth", 1400.00f}
		
	};
	
	
	/* Arrange products sorting in ascending order by its cost */
	
	for(i=0;i<4;i++)
	{
		for(j=i+1;j<4;j++)
		{
			int s=0, c=0;
			while(products[i].title!=NULL && products[j].title!=NULL)
			{
				if(products[i].title[s]==products[j].title[c])
				{
					s++;
					c++;
				}		
				else
				{
					break;
				}		
			}			
			
			if(products[i].title[s]>products[j].title[c])
			{
				t = products[i];
				products[i] = products[j];
				products[j] = t;
			}
		}
	}
	
	
	for(i=0;i<4;i++)
	{
		printf("\n %10d %20s %10.2f", products[i].id, products[i].title, products[i].cost);
	}
	
	
	
}


/* Sorting Algorithms 

	1) Selection Sort
	2) Insertion Sort
	3) Bubble Sort
	4) Quick Sort
	5) Merge Sort
	6) Radix Sort 
	7) Shell Sort
	

Sort by Cost
			if(products[i].cost>products[j].cost)
			{
				t = products[i];
				products[i] = products[j];
				products[j] = t;
			}	
*/










