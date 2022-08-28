/* Program to count Vowel and Consonant in string  
   which has without spaces and in lower case */

#include<stdio.h>

int main()
{
	int i=0,vc=0,cc=0;
	//vc -> vowel count
	//cc -> consonant count

	printf("Enter a string :");
	char c[1000];
	scanf("%s",c);
	while(c[i] != '\0')
	{
		switch(c[i])
		{
			case 'a' :case 'e' :case 'i' :case 'o' :case 'u' :
			vc++;
			break;
			case 'b' :case 'c' :case 'd' :case 'f' :case 'g' :case 'h' :
			case 'j' :case 'k' :case 'l' :case 'm' :case 'n' :case 'p' :
			case 'q' :case 'r' :case 's' :case 't' :case 'v' :case 'w' :
			case 'x' :case 'y' :case 'z' :
			cc++;
			break;
		}
	i++;
	}
	printf("Number of Vowel : %d\n Number of Consonant : %d\n",vc,cc);
	return 0;
}