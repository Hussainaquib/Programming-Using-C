// Program to find maximum number between three numbers

#include<stdio.h>

int main()
{
	int no1,no2,no3,max;
	printf("Enter a three number :");
	scanf("%d %d %d",&no1,&no2,&no3);
	max = no1>no2 ? (no1>no3 ? no1 : no3) : (no2>no3 ? no2 : no3);
	printf("%d is largest number among three numbers %d,%d and %d",max,no1,no2,no3);
	return 0;
}