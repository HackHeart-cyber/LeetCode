class Sales_data {
public:
	// 其他成员和构造函数的定义，
	Sales_data(const Sales_data&);
private:
	std::string bookNo;
	int units_sold = 0;
	double revenue = 0.0;
};

Sales_data::Sales_data(const Sales_data &orig):
	bookNo(orig.bookNo),
	units_sold(orig.units_sold),
	revenue(orig.revenue)
{}


