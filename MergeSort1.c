/* WAP to sort two different arrays in ascending order and produce a single sorted array
   (Merge Sort) 			*/
   
#include<stdio.h>
#include<stdlib.h>

void main()
{
	//If two arrays are sorted.
	int x[6] = {16,19,33,77,100,133};
	int y[3] = {51, 63, 98};
	int *z, s1,s2, i,j,k;
	
	i=j=k=0;
	
	s1 = sizeof(x)/sizeof(int);		//6
	s2 = sizeof(y)/sizeof(int);		//3
	
	
	z = (int*)malloc(sizeof(int)*(s1+s2));		//16 byte
	
	while(i<s1 && j<s2)
	{
		if(x[i]<y[j])
		{
			z[k++]=x[i];
			i++;
		}
		else
		{
			z[k++]=y[j];
			j++;
		}
	}
	
	while(i<s1)
	{
		z[k++]=x[i];
		i++;
	}
	
	while(j<s2)
	{
		z[k++]=y[j];
		j++;
	}
	
	printf("\n %d sorted arrays are = ");
	for(i=0;i<s1+s2;i++)
	{
		printf(" %d",z[i]);
	}
	
}
