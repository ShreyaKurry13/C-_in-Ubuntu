#include "Assign2.h"
#include <iostream>


int main(void)
{
	Money m;
	m.Print();

	Money m1(43);
	m1.Print();

	Money m2(20,120);
	m2.Print();

	puts("Adding..");
	Money n = m + m1 + m2;
	n.Print();

	puts("Subtracting..");
	Money p = m1 - m2 - m;
	p.Print();

	puts("Greater than...");
	if(m1 > m2)
	{
		cout << "m1 is gretaer than m2 \n" <<endl;
	}
	else
	{
		cout << "m2 is greater than m1" <<endl;
	}

	puts("Less than...");
        if(m1 < m2)
        {
                cout << "m1 is less than m2 \n" <<endl;
        }
        else
        {
                cout << "m2 is less than m1 \n" <<endl;
        }
}
