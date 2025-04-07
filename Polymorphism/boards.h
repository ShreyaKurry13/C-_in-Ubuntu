namespace Ads
{

	enum Medium {Plastic = 1, Wooden = 2, Metal = 5};

	class Signboard
	{
	public:
		
		virtual double Area() const = 0;
		double Price() const;
		virtual ~Signboard() {}
		Signboard(int id){}
	protected: 
		Medium material;
	};

	class Wasteful
	{
	public:
		virtual double Extra() const = 0;
		virtual ~Wasteful() {}
	protected:
		int layers;
	};

	class RectangularBoard : public virtual Signboard
	{
	public:
		RectangularBoard(float width, float height, Medium make);
		double Area() const;
	private:
		float length, breadth;
	};

	class CircularBoard : public virtual Signboard, public Wasteful
	{
	public:	
		CircularBoard(float diameter, Medium make);
		double Area() const;
		double Extra() const;
	private:
		float radius;
	};
}


