//program for print left lower half triangle star pattern

#include<stdio.h>

void main()
{
	int i,j,n;
	printf("Enter a number of rows:");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		for(j=i;j>0;j--)
		printf("*");
		printf("\n");
	}
}