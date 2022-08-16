// program to print Hello World! using for loop


#include<stdio.h>

void main()
{
	int n;
	printf("Enter the number of times you print the statement:");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		printf("Hello World!\n");
	}
}