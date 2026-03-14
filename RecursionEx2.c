/* Create and show addition of array values using recursion */

#include<stdio.h>

	int addn=0;
	void addition(int z[], int size, int i)
	{	
		addn=addn+z[i];
		i++;
		
		if(i>size)
			return;
			
		addition(z,size,i);
	}

void main()
{
	int x[5] = {9,4,3,6,8}, i, sum;
	
	sum=0;
	for(i=0;i<5;i++)
	{
		sum+=x[i];
	}
	
	printf("\n Sum of array values = %d", sum);
	
	addition(x, 5, 0);
	printf("\n Addition using recursion = %d", addn);
}
