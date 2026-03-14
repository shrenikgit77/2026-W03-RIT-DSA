/* Recursion */

#include<stdio.h>

	int start=0;
	void sayHello(int n)
	{
		printf("\n Hello User");
		start++;
		Sleep(100); //delay for 100 miliseconds
		
		if(start>=n)
			return;
			
		sayHello(n);
	}
	
void main()
{
	sayHello(10);
}
