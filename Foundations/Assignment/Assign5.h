#include <cmath>

class Investment {
private:
    double amount;  
    int period;  


public:
    Investment(double amt, int per) : amount(amt), period(per) {}


    void setAmount(double amt)
    {
	    amount = amt;
    }

    double getAmount() const {
        return amount;
    }

    void setPeriod(int per)                          
    { 
        period = per;
    }

    int getPeriod() const {
        return period;
    }

    double InterestRate() const 
    {
        double rate = 0.0;

    if (amount < 10000)
    {
         rate = 8.0;  
    } 
    else if (amount >= 10000 && amount <= 50000)
    {
         rate = 9.0;  
    }
    else 
    {
         rate = 10.0;  
    }

    if (period > 5) 
    {
         rate += 1.0;  
    }

    return rate;
     }


    double GetInterest(bool isCompound) const 
    {
    	double rate = InterestRate();  
    	double interest = 0.0;
	
	if(isCompound)
	{
		return interest = amount * (pow((1 + rate / 100), period) - 1);
	}
	else
	{
		return interest = (amount * rate * period) / 100;
	}
	 return interest;
    }
	
   ~Investment() {}


};
