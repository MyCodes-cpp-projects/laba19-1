#include "Circle.h"

Circle::Circle():  inscribed(), S(0)
{
}

Circle::Circle(int a, int R, double S) : inscribed(a,R),S(S)
{
}

Circle::~Circle()
{
}

void Circle::display()
{
	Square::display();
	inscribed::display();
	std::cout << "circle S = " << S << std::endl;
}
