//program for find average of five numbers

#include<stdio.h>

void main()
{
	int a,b,c,d,e, avg ;
    	printf("Enter a five elements to find average:  ");
    	scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);

	avg=(a+b+c+d+e)/5;
	printf("Average of entered number is %d",avg);
}