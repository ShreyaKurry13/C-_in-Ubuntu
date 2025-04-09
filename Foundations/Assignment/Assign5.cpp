#include "Assign5.h"
#include <iostream>

using namespace std;

int main(void) {
    Investment inv1(8000, 3);
    Investment inv2(25000, 7);
    Investment inv3(60000, 10);

    cout << "Investment 1 - Simple Interest: " << inv1.GetInterest(false) << endl;
    cout << "Investment 1 - Compound Interest: " << inv1.GetInterest(true) << endl;

    cout << "Investment 2 - Simple Interest: " << inv2.GetInterest(false) << endl;
    cout << "Investment 2 - Compound Interest: " << inv2.GetInterest(true) << endl;

    cout << "Investment 3 - Simple Interest: " << inv3.GetInterest(false) << endl;
    cout << "Investment 3 - Compound Interest: " << inv3.GetInterest(true) << endl;

}

