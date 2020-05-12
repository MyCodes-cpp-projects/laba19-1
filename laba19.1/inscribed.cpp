#include "inscribed.h"

inscribed::inscribed() : Square(0),R(0)
{
}

inscribed::inscribed(int a, double R)
	: Square(a),R(R)
{
}

inscribed::~inscribed()
{
}

void inscribed::display()
{
	std::cout << "inscribed R = " << R <<  std::endl;
}
