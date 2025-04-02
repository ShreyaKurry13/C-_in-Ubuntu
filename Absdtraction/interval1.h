#include <cstdio>


class Interval
{
public:
	Interval(short min=0,short sec =0)
	{
		id = ++count;
		minutes = min + sec /60;
		seconds = sec % 60;
		printf("Interval instance <%d> activated\n", id);
	}



	
private:
	int id;
	short minutes;
	short seconds;
	static int count;

}

int Interval::count = 0;
