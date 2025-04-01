#include "banner.h"
#include <cstdio>

double BannerPrice(Banner poster,int copies)
{
	float rate = copies < 5 ? 0.90: 0.80;
	return rate * poster.Area();
}

int main(void)
{
	int n;
	printf("Number of Banners: ");
	scanf("%d",&n);

	Banner a;
	printf("Total Payment of Standard Banner: %.3lf \n",n * BannerPrice(a , n));

	float w,h;
	printf("Dimensions of Banner: ");
	scanf("%f %f",&w,&h);

	Banner b;
	b.Resize(w,h);
	printf("Total Payment for your Banner = %.3lf \n",n * BannerPrice(b , n));

}
