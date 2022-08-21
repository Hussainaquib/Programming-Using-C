// Program to swap two number without third variable

#include<stdio.h>

int main()
{
	int n1,n2;
	printf("Enter a two number:");
	scanf("%d %d",&n1,&n2);
	
	printf("Before swap n1=%d and n2=%d",n1,n2);
	n1 = n1+n2;
	n2 = n1-n2;
	n1 = n1-n2;
	printf("\nAfter swap n1=%d and n2=%d",n1,n2);
	return 0;
}