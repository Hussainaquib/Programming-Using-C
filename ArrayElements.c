//Print elements in Integer Array 

#include<stdio.h>

void main()
{
	int arr[25];
	int i,j,n;
	printf("Enter number of integer you want to print:");
	scanf("%d",&n);
	printf("enter array element :");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(j=0;j<n;j++)
	{
		printf("%d\t",arr[j]);
	}
}