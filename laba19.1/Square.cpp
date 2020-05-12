#include "Square.h"

Square::Square()
	:a(0)
{
}

Square::Square(int a)
	: a(a)
{
}

Square::~Square()
{
}

void Square::display()
{
	std::cout << "Square side = " << a << std::endl;
}
