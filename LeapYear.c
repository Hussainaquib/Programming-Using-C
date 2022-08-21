// Program to find enter year is leap year or not

#include<stdio.h>

void main()
{
	int no1;
	printf("Enter a year :");
	scanf("%d",&no1);

	((no1%4 == 0 && no1%100 != 0) || no1%400 == 0) ? printf("Enter year %d is leap year",no1) : printf("Enter year %d is not leap year",no1);
}