/* Tricky Question */

#include<stdio.h>


	void fn(int s, int e)
	{
		printf("\n %d",s);
		s++;
		
		if(s>=e)
			return;
			
		fn(s,e); //line n1, value of s will be 4
		fn(s,e);
	}


void main()
{
	fn(1,6);
}
