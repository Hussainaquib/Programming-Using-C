//program to find digits sum of integer

#include<stdio.h>

void main()
{
	int n,sum=0;
	printf("Enter a integer number :");
	scanf("%d",&n);
	while(n>0)
	{
		sum += n%10;
		n=n/10;
	}
	printf("Digits sum is %d",sum);
}