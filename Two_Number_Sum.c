// Program to add to number enter by user

#include<stdio.h>

int main()
{
	int no1,no2,sum=0;
	printf("Enter a two numbers :");
	scanf("%d %d",&no1,&no2);
	sum = no1+no2;
	printf("%d is sum of two numbers %d and %d",sum,no1,no2);
	return 0;
}