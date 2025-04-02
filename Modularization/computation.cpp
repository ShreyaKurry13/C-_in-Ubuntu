#include <cmath>
#include "computation.h"

double Compute(int first,int last,float level)
{
	double result = 0;

	if(last < first)
		throw last;

	for(int i=first; i<=last;i++)
		result += pow(i,level);

	return result;
}
