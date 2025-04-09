class Employee
{
public: 
	Employee(int hh=180, int rr= 100)
	{
		eid = 1000 + (++ecount);
		hours= hh;
		rate = rr;
	}
	
	void PrintEmployee() const
	{
		printf("Printing Employee details \n");
		printf("Id = %d \n",eid);
		printf("Hours worked = %d \n",hours);
		printf("Rate = %.2lf \n",rate);
		printf("Annual Salary = %.3lf \n",GetAnnualSalary());
		printf("============================ \n");
	}

	double GetAnnualSalary() const
	{
		double asal = 0;
		asal = (hours * rate) * 12;
		return asal;
	}

	static int GetEmployeeCount()
	{
		return ecount;
	}

protected:
	int eid;
	int hours;
	double rate;
	static int ecount;

};

class SalesPerson : public Employee
{
	public:
		SalesPerson(int hh,double rr,double ss) : Employee(hh , rr)
		{
			sales = ss;
			printf("SalesPerson instance created \n");
		}

		double GetAnnualSalary()
		{
			double basesal = Employee::GetAnnualSalary();
			basesal = basesal + 0.20 * sales;

			return basesal;
		}

	private:
		double sales;
};

int Employee::ecount = 0;
