
class Banner
{
public:
	Banner(float w=20,float h = 5)
	{
		width = w;
		height = h;
	}

	void Resize(float w, float h)
	{
		width = w;
		height = h;
	}

	virtual double Area() const
	{
		return width * height;
	}
	
private:
	float width;
	float height;
};

class CurvedBanner : public Banner
{
public:
	CurvedBanner(float r) : Banner(18,6)
	{
		radius = r;
	}

	double Area() const
	{
		return Banner::Area() - 0.86 * radius * radius;
	}

private:
	float radius;
};














