/* Pointer demo */

#include<stdio.h>

void main()
{
	int a, b;
	int *p1, *p2, ans;
	
	//Ex1
	a = 3;
	b = 7;
	
	p1 = &a;
	p2 = &b;
	
	ans = *p1 % a + *p2%*p1;
	printf("\n ans = %d" ,ans);
	
	//Ex2
	a=16;
	b=9;
	
	p1=&a;
	p2=&b;
	
	a++;
	(*p1)=b++;
	
	ans = a + b;
	printf("\n ans = %d", ans);
}




