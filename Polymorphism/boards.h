namespace Ads
{
	enum Medium{Plastic =1,Wooden =2,Metal =5};

	class Signboard{
		public:
			virtual double Area() const;
			double Price() const;
			virtual ~Signboard();

		protected:
			Medium material;
	};

	class Rectangularboard : public Signboard
	{
		public:
			Rectangularboard(float w,float h,Medium make);
			double Area() const;
		private:
			float length, breadth;
	};

	class CircularBoard : public Signboard
	{
		public: 
			CircularBoard(float diameter,Medium make);
			double Area() const;

		private:
			float radius;	
	};
}

