//program to print integer's table

#include<stdio.h>

void main()
{
	int n;
	printf("enter a number :");
	scanf("%d",&n);
	for(int i=1;i<11;i++)
	printf("%d\n",i*n);
}