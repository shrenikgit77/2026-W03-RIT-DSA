/* Selection Sort */

#include<stdio.h>

void main()
{
	int x[5] = {89,47,51,12,53};
	int i, j, t;
	
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(x[i]>x[j])
			{
				t=x[i];
				x[i]=x[j];
				x[j]=t;
			}
		}
	}
	
	printf("\n Ascending order = ");
	for(i=0;i<5;i++)
		printf(" %d",x[i]);
}
