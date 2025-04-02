class Banner
{

public:
	Banner(){
		width=20;
		height = 5;
	}

	void Resize(float w,float h)
	{
		width = w;
		height = h;
	}

	double Area()
	{
		return width * height;
	}


private:
	float width;
 	float height;	
};
