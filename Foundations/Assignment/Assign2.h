#include <iostream>

using namespace std;

class Money
{
	public:
		Money()
		{
			rupees = 0;
			paise = 0;
		}

		Money(int r)
		{
			rupees = r;
			paise = 0;
		}

		Money(int r,int p)
		{
			rupees = r;
			paise = p;
		}

		int Sum() const
		{
			return 100 * rupees + rupees;
		}

		Money operator+(const Money& rhs)
		{
			return Money(rupees + rhs.rupees, paise + rhs.paise);
		}

		Money operator-(const Money& rhs)
                {
                        return Money(rupees - rhs.rupees, paise - rhs.paise);
                }

		bool operator>(const Money& rhs)
                {
                        return (100 * rupees + paise) > (rhs.rupees *100 + rhs.paise);
                }

		bool operator<(const Money& rhs)
                {
                        return (100 * rupees + paise) < (rhs.rupees *100 + rhs.paise);
                }

		void Print() 
		{
			if(paise >= 100)
			{
				rupees = rupees + paise /100;
				paise = paise % 100;
			}
			cout << rupees << " : rupees |" << paise << " : paise \n" ;
		}

	private:
		int rupees;
		int paise;
};
