#include <cstdio>

double BannerPrice(float width, float height) 
{
	float rate = width <= height ? 0.95 : 0.80;
	return width * height * rate;
}

double BannerPrice(float width, float height, short layers) 
{
	return 1.35 * width * height * layers;
}


int main(void)
{

	float w, h;
	int n;

	printf("Dimensions of Banner: ");
	scanf("%f%f", &w, &h);
	printf("Number of Banners   : ");
	scanf("%d", &n);

	printf("Total payment for regular banners: %.2f\n", n * BannerPrice(w, h));
	printf("Total payment for premium banners: %.2f\n", n * BannerPrice(w, h, 3));


}
