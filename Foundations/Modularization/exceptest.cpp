#include <cstdio>
#include "computation.h"

int main(void)
{
	int lower,upper;

	puts("Hello user!");

	printf("Lower and Upper Limits: ");
	scanf("%d %d",&lower , &upper);

	try 
	{
		printf("Result of simple computation = %lf \n",Compute(lower,upper));
		printf("Result of complex computation = %lf \n",Compute(lower,upper,2.5));
	}
	catch(int e)
	{
		printf("Invalid Limit: %d \n",e);
	}
	puts("Goodbye User!");
}
