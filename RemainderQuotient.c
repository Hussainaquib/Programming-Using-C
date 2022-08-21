// Program to find Remainder and Quotient of two number

#include<stdio.h>

int main()
{
	int no1,no2,quo,rem;
	printf("Enter a two number :");
	scanf("%d %d",&no1,&no2);
	rem = no1%no2;
	quo = no1/no2;
	printf("%d is remainder and %d is quotient of two number %d and %d",rem,quo,no1,no2);
	return 0;
}