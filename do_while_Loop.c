// program to print "Hello World!" using do while loop

#include<stdio.h>

void main()
{
	int i=1,n;
	printf("Enter the number of times you print the statement:");
	scanf("%d",&n);
	do
	{
		printf("Hello World!\n");
		i++;
	}
	while(i<=n);
}