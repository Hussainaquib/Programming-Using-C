// program to calculate perimeter of Rectangle

#include<stdio.h>

void main()
{
	int a,b;
	printf("Enter a length of rectangle :");
	scanf("%d",&a);
	printf("Enter a breadth of rectangle :");
	scanf("%d",&b);

	printf("Perimeter of rectangle is %d",2*(a+b));
}