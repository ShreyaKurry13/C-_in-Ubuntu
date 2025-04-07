#include "boards.h"
#include <iostream>

using namespace Ads;

double Order(Signboard* poster,int count)
{
	float discount = count < 10 ? 0 : 0.05;
	return count * (1 - discount) * poster->Price();
}

int main(void)
{
	float d;
	int n;
	std::cout<< "Size and Number of Boards: ";
	std::cin>> d>>n;
	

	Rectangularboard a(0.8 * d, 0.6 * d, Medium::Wooden);
	CircularBoard b(d, Medium::Metal);

	std::cout << "Total payment for rectangular boards: "
			  << Order(&a, n)
			  << std::endl;
	std::cout << "Total payment for circular boards: "
			  << Order(&b, n)
			  << std::endl;


}



