// program to print Hello World! using while loop

#include<stdio.h>

void main()
{
	int i=1,n;
	printf("Enter the number of times statement you wants to print:");
	scanf("%d",&n);
	while(i<=n)
	{
		printf("Hello World!\n");
		i++;
	}
}