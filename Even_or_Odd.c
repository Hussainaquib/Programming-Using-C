// Program to find enter number is even or odd

#include<stdio.h>

int main()
{
	int no1;
	printf("Enter a number:");
	scanf("%d",&no1);
	no1%2==0 ? printf("Enter number %d is even",no1) : printf("Enter number %d is odd",no1);
	return 0;
}