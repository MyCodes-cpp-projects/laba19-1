#pragma once
#include "inscribed.h"
class Circle : public inscribed,public Square
{
	double S;
public:
	Circle();
	Circle(int a, int R,double S);
	~Circle();
	

	void display() override;
};

