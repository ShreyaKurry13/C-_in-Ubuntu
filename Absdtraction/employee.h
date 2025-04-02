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

private:
	int eid;
	int hours;
	double rate;
	static int ecount;

};

int Employee::ecount = 0;
