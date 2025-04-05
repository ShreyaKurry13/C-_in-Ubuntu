#include "boards.h"
#include <iostream>

using namespace Ads{

double Order(Ads::Signboard* poster,int count)
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
	

}


}
