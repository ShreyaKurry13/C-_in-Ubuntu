#include <cstdio>

int isEven(int n)
{
  if(n%2==0)
     return 1;
  return 0;
}

int isOdd(int n)
{
  if(n%2!=0)
     return 1;
  return 0;
}

int sumofAllSpecific(int lower,int higher,int(*check)(int))
{
	int result=0;
	for(int i = lower;i<=higher;i++)
	{
		if(check(i))
			result = result +i;
	}
	return result;
}



int main(void)
{

	int lower,upper;
	printf("Enter the range for lower and upper limits: ");
	scanf("%d %d",&lower,&upper);

	printf("The sum of all even numbers between %d and %d is %d \n",lower,upper,sumofAllSpecific(lower,upper,isEven));
	printf("The sum of all odd numbers between %d and %d is %d \n" ,lower,upper,sumofAllSpecific(lower,upper, isOdd));
}

