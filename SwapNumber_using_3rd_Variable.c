// Program to swap two number using third variable

#include<stdio.h>

void swap(int* a,int* b)
{
	int t;
	t=*a;
	*a=*b;
	*b=t;
}
int main()
{
	int a,b;
	printf("Enter a two number:");
	scanf("%d %d",&a,&b);
	swap(&a,&b);
	printf("%d %d",a,b);
	return 0;
}