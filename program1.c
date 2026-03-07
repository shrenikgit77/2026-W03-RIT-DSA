#include<stdio.h>

void main()
{
	int no, count = 0;
		
		printf("\n Enter a number = ");
		scanf("%d",&no); //7
		
	
		for(d=2;d<no/2;d++)
		{
			if(no%d==0) // (7%2==0) (7%3==0) (7%4==0) (7%5==0) (7%6==0)
			{
				count++;	
			}	
		}		
		
		if(count==0)
		{
			printf("\n It is Prime");
		}
		else
		{
			printf("\n Number is not a prime number");
		}
}
