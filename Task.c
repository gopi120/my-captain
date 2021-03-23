#include<stdio.h>
int main()
{
	int n;
	printf("Enter a number:");
	scanf("%d",&n);
	
	if(n<=100 && n>=85)
	{
		printf("GRADE A");
	}
	if(n<=84 && n>=70)
	{
		printf("GRADE B");
	}
	if(n<=69 && n>=55)
	{
		printf("GRADE C");
	}
	if(n<=54 && n>=40)
	{
		printf("GRADE D");
	}
	if(n<40)
	{
		printf("GRADE F");
	}
 return 0;
}
