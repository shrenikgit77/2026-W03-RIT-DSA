/* Stack using Array */

#include<stdio.h>
#define MAX 5

void main()
{
	int choice;
	int stack[MAX], top=-1, i;
	
	while(1)
	{
		printf("\n 1. Push");
		printf("\n 2. Pop");
		printf("\n 3. Show");
		printf("\n 4. Exit");
		
		printf("\n Select Option :");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1:
				if(top==MAX-1)
				{
					printf("\n Stack overflow...");
				}
				else
				{
					top++;
					printf("\n Enter a number to add it in a stack :");
					scanf("%d",&stack[top]);
				}
				break;
			case 2:
				if(top==-1)
				{
					printf("\n stack is empty");
				}
				else
				{
					top--;
					printf("\n value removed from stack");
				}
				break;
			case 3:
				if(top==-1)
				{
					printf("\n stack is empty");
				}
				else
				{
					for(i=top;i>=0;i--)
					{
						printf("\n %d",stack[i]);
					}
				}
				break;
			case 4:
				break;
			default:
				printf("\n invalid choice!");
		}
	}
}
