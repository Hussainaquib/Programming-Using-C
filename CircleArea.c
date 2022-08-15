//Program to find area of Circle

#include<stdio.h>

void main()
{
	float const PI = 3.14;
	int r;
	float area;
	printf("Enter a radius of circle :");
	scanf("%d",&r);
	area = PI*r*r;
	printf("Area of circle is %5.2f",area);
}