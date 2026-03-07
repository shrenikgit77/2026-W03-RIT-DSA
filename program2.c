/* WAP to input two numbers and check which is max */

#include<stdio.h>

void main()
{
	int x, y;
	
	printf("\n Enter value of x = ");
	scanf("%d",&x);
	
	printf("\n Enter value of y = ");
	scanf("%d",&y);
	
	if(x>y)
	{
		printf("\n x is max");
	}
	else
	{
		printf("\n y is max");
	}
}
