#include <cstdio>
#include "interval1.h"

int main(void)
{

	int n;
	printf("Number of Intervals: ");
	scanf("%d",&n);

	if(n==1)
	{
		Interval* a = new Interval(3,25);
		a->Print();
		delete a;
	}
	else
	{
		Interval* b = new Interval[n];
		for(int i=0;i<n;i++)
		{
			b[i].Update(40*i +225);
			b[i].Print();
		}
		delete[] b;
	}


}
