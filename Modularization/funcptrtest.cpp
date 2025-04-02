#include<cstdio>


double Expense(int year)
{
	return 5 * year - 2;
}

double Income(int year)
{
	return (year * year +1) / 2;
}

double CommonSum(int year,double(*growth)(int))
{
	double total = 0;
	for(int i=1; i<=year;i++)
	{
		total += growth(i);
	}
	return total;
}

int main(void)
{
	int n;

	printf("Number of years: ");
	scanf("%d",&n);

	printf("Total expense : %lf \n",CommonSum(n,Expense));
	printf("Total income : %lf \n",CommonSum(n,&Income));
}
