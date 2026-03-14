/* Arrange string array in ascending order */

#include<stdio.h>
#include<string.h>

void main()
{
	int i, j, s, c;
	char t[20];
	char cities[5][20] = {"Nashik", "Bengaluru", "Surat", "Noida", "Nagpur"};

	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			int s=0, c=0;
			while(cities[i]!=NULL && cities[j]!=NULL)
			{
				if(cities[i][s]==cities[j][c])
				{
					s++;
					c++;
				}		
				else
				{
					break;
				}		
			}
			
//			printf("\n s = %d \t c = %d", s, c);
			if(cities[i][s]>cities[j][c])
			{
				strcpy(t, cities[i]);
				strcpy(cities[i], cities[j]);
				strcpy(cities[j], t);
			}
		}
	}
	

	
	for(i=0;i<5;i++)
	{
		printf(" %s", cities[i]);
	}
}


/*

	          0   1   2   3   4   5  6   7  8  9   10  ...  19
	cities 0  N   a   s   h   i   k  NULL
	       1  B   e   n   g   a   l  u   r  u NULL
	       2  S   u   r   a   t   NULL
	       3  N   o   i   d   a   NULL
	       4  N   a   g   p   u   r  NULL

*/
