/* Stack using List */

#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
	int no;
	struct Node *next;
}Node;

void main()
{
	int choice;
	Node *top, *first=NULL, *fp=NULL, *t;
	
	while(1)
	{
		printf("\n 1. Push");
		printf("\n 2. Pop");
		printf("\n 3. Show");
		printf("\n 4. Exit");
		
		printf("\n Enter choice :");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1:
				top = (Node*)malloc(sizeof(Node));
				
				if(first==NULL)
				{
					first=fp=top;
				}
				else
				{
					fp->next = top;
					fp=top;
				}
				
				printf("\n Enter a value to add in a stack :");
				scanf("%d",&top->no);			
				
				printf("\n Insert Successfull");
				top->next=NULL;
				
				break;
			case 2:
				if(first==NULL)
				{
					printf("\n Stack is Empty");
				}
				else
				{
					t=first;
					while(1)
					{
						if(t->next==top)
							break;
							
						t=t->next;
					}
					
					top=t;
					top->next=NULL;
					fp=top;
					printf("\n value removed from stack");
				}
				break;
			case 3:
				if(first==NULL)
				{
					printf("\n Stack is empty");
				}
				else
				{
					t=first;
					while(1)
					{
						printf("\n %d",t->no);
						
						if(t->next==NULL)
							break;
							
						t=t->next;
					}
				}
				break;
			case 4:
				break;
			default:
				printf("\n invalid choice");
		}
	}
}
