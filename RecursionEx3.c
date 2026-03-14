/* Tricky Question */

#include<stdio.h>

	int s=1;
	void fn(int n)
	{
		printf("\n %d",s);
		s++;
		
		if(s>=n)
			return;
			
		fn(n);
		fn(n);
	}


void main()
{
	fn(5);
}
