#include "banners.h"
#include <cstdio>

double BannerPrice(const Banner& poster, int copies)
{
	float rate = copies < 5 ? 0.95 : 0.80;
	return copies * rate * poster.Area();
}

int main(void)
{

	float w,h;
	int n;
	printf("Dimensions of Banner: ");
	scanf("%f %f",&w,&h);

	printf("Number of Banners: ");
	scanf("%d",&n);

	Banner b(w,h);
	printf("Total price of regular banner = %.3lf \n",BannerPrice(b,n));

	CurvedBanner c(4);
	c.Resize(w,h);
	printf("Total price of cureved banner = %.3lf \n",BannerPrice(c,n));

}
