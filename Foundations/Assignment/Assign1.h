#include <iostream>

using namespace std;

class Distance
{
	public:
		Distance()
		{
			feet =0;
			inches = 0;
		}

		Distance(int f)
		{
			feet = f;
			inches = 0;
		}

		Distance(int f,int i)
                {
                        feet = f;
                        inches = i;
                }

		~Distance()
		{
			cout<<"Distance object destroyed." <<endl;
		}

		void Print()
		{
			if(inches >12)
			{
				feet = feet + inches / 12;
				inches = inches % 12;
			}
			cout << "feet :" << feet << " inches : " << inches <<"\n";
		}
	private:
		int feet;
		int inches;
};
