#include <cstdio>

double BannerPrice(float width,float height){

	float rate = width<=height ? 0.95:0.80;
	return width * height*rate;
}
double BannerPrice(float width,float height,short layers){

	return 1.5 * width * height * layers;
}

int main(void)
{
	float w ,h;
	int n;

	printf("Enter dimensions for banner: ");
	scanf("%f %f",&w,&h);

	printf("Enter number of banners: ");
	scanf("%d",&n);

	printf("Total number of banners: %.2lf \n",n * BannerPrice(w,h));
	printf("Total number of premium banners: %.2lf \n",n * BannerPrice(w,h,3));

}
