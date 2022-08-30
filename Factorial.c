// program to find factorial of number using Iterative and Recursive method

#include<stdio.h>
long int fact(int n);
long int Ifact(int n);

int main()
{
	int num;
	printf("Enter a number :");
	scanf("%d",&num);
	printf("\nUsing recursion :\n");
	if(num<0)
	{
		printf("No factorial for negative number \n");
	}
	else{
		printf("Factorial of %d is %d\n",num,fact(num));
	}
	
	printf("\nUsing iteration :\n");
	if(num<0)
	{
		printf("No factorial for negative number \n");
	}
	else
	{
		printf("Factorial of %d is %d\n",num,Ifact(num));
	}
	return 0;
		
}


//recursion
long int fact(int n)
{
	if(n==0)
	return(1);
	return(n*fact(n-1));
}

//iterative 
long int Ifact(int n)
{
	long fact=1;
	while(n>0)
	{
		fact=fact*n;
		n--;
	}
	return fact;
}
