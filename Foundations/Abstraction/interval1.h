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

	long Time() const 
	{
		return 60 * minutes + seconds;
	}

	void Update(long t)
	{
		minutes = t/ 60;
		seconds = t % 60;
	}
	
	void Print() const
	{
		printf("%d : %02hd \n",minutes,seconds);
	}

	static int Activated()
	{
		return count;
	}

	~Interval()
	{
		printf("Interval instance <%d> deactivated \n",id);
	}

	
private:
	int id;
	short minutes;
	short seconds;
	static int count;

};

int Interval::count = 0;
