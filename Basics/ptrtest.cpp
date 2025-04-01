#include <cstdio>

double Average(double first,double second,double* deviation)
{
	*deviation = first > second ? (first - second)/2 : (second - first)/2;
	return (first+second)/2;
}

int main(void)
{
	double a,b;

	printf("Two real values: ");
	scanf("%lf %lf",&a,&b);

	double d;
	double res = Average(a,b,&d);

	printf("The average is %.3lf and the deviation is %.3lf \n",res,d);


}
