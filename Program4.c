/* Queue using Array */

#include<stdio.h>
#define MAX 5

void main()
{
	int choice, front=-1, rear=-1;
	int queue[MAX] ,i ;
	
	while(1)
	{
		printf("\n 1. Insert");
		printf("\n 2. Remove");
		printf("\n 3. Show");
		printf("\n 4. Exit");
		
		printf("\n Enter choice :");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1:
				
				if(rear==MAX-1)
				{
					printf("\n Queue is Full");
				}
				else
				{
					if(front==-1)
					{
						front++;
					}
					
					rear++;
					printf("\n Enter a value to insert in a queue :");
					scanf("%d",&queue[rear]);
				}
				break;
			case 2:
				if(front==-1)
				{
					printf("\n Queue is Empty");
				}
				else
				{
					front++;
					if(rear==-1)
					{
						front==-1;
					}
					printf("\n value removed from queue");
				}
				break;
			case 3:
				printf("\n Queue");
				for(i=front;i<=rear;i++)
				{
					printf("\t %d",queue[i]);
				}
				break;
			case 4:
				break;
				
			default:
				printf("\n invalid choice ");
		}
	}
}
