#include <cstdio>
#include "ems.h"

double tax(Employee& e)
{
	double tax = 0;
	double asal = e.GetAnnualSalary();
	double extra = asal - 200000;

	if(extra > 0)
		return 0.2 * extra;
	else 
		return 0;
}

int main(void)
{
	Employee e;
	Employee e1(200);
	Employee e2(250,120);
	Employee e3(150,80);

	SalesPerson s(200,120,150);
	s.PrintEmployee();
	printf("The tax payable of SalesPerson = %.3lf \n",tax(s));


	e.PrintEmployee();
	printf("The tax payable = %.3lf \n",tax(e));
	
	/*e1.PrintEmployee();
	printf("The tax payable = %.3lf \n",tax(e1));
	e2.PrintEmployee();
	printf("The tax payable = %.3lf \n",tax(e2));
	e3.PrintEmployee();
        printf("The tax payable = %.3lf \n",tax(e3));
	*/

	printf("The total number of Employees are : %d \n",Employee::GetEmployeeCount());


}

