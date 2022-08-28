// Program to find second largest element in array

#include<stdio.h>

void main()
{
	int arr1[100],n,i,j=0,lrg,lrg2nd;
	printf("Input the size of array :");
	scanf("%d",&n);
	
	printf("Input %d elements in the array:\n",n);
	for(i=0;i<n;i++)
	{
		printf("Element-%d:",i);
		scanf("%d",&arr1[i]);
	}
	lrg=0;
	for(i=0;i<n;i++)
	{
		if(lrg<arr1[i])
		{
			j=i;
		}
	}
	lrg2nd=0;
	for(i=0;i<n;i++)
	{
		if(i==j)
		{
			i++;
			i--;
		}
		else
		{
			if(lrg2nd<arr1[i])
			{
				lrg2nd=arr1[i];
			}
		}
	
	}
	printf("The second largest element in the array is: %d\n\n",lrg2nd);
}