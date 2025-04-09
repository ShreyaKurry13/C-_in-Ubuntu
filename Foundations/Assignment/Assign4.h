class Item
{
	public:
		Item(int q = 0,double c = 0.0,float p = 0.0) : quantity(q), cost(c), profit(p){}

		void setCost(double c)
		{
			cost = c;
		}

		double getCost() const
		{
			return cost;
		}

		void setProfit(double p)
		{                                                     
			profit = p;                                                                                                     }

		float getProfit() const
		{
			return profit;
		}

		void setQuantity(int q)
		{
			quantity = q;
		}

		int getQuantity() const
		{
			return quantity;
		}

		virtual double GetSellingPrice() 
		{
			return 1.10 * cost * (1 + profit / 100) * quantity;
		}

	protected:
		int quantity;
		double cost;
		float profit;
};

class UsedItem : public Item
{
	public:
		UsedItem(string n = "", double c = 0.0, float p = 0.0, float d = 0.0) : Item (n , c, p) 
		{
			discount = d;
		}

		void setDiscount(float d)
		{
			discount = d;
		}

		float getDiscount() const
		{
			return discount;
		}

		double SellingPrice()
		{
			double ogPrice = Item::SellingPrice();
			return ogPrice * (1 - discount /100);
		}
		
	private:
		float discount;

};
