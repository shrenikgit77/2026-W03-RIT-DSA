/* Bubble Sort */

#include<stdio.h>

void main()
{
	int x[5] = {89,47,51,12,53};
	int i, j, t;
	
	for(i=0;i<5;i++)
	{
		for(j=0;j<4-i;j++)  //i=0, 4 times, i=1, 3 times 
		{
			if(x[j]>x[j+1])
			{
				t=x[j];
				x[j]=x[j+1];
				x[j+1]=t;
			}
		}
	}
	
	printf("\n Ascending order = ");
	for(i=0;i<5;i++)
		printf(" %d",x[i]);
}
