//program to find area of triangle using Heron's Formula

#include<stdio.h>
#include<math.h>

void main()
{
	int a,b,c;
	float area,s;
	printf("Enter a sides of triangle :");
	scanf("%d %d %d",&a,&b,&c);
	s=(a+b+c)/2;
	area = sqrt(s*(s-a)*(s-b)*(s-c));
	printf("Area of triangle is %5.2f",area);
}