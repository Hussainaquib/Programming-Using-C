// program to print fibonacci series

#include<stdio.h>

void main()
{
	int n,term=0,term1=0,term2=1;
	printf("Enter number of terms to print : ");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		printf("%d\t",term);
		term = term1+term2;
		term2=term1;
		term1=term;
	}
}