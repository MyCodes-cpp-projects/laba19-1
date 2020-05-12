#pragma once
#include "Square.h"
class inscribed : public virtual Square
{
	double R;
public:
	inscribed();
	inscribed(int a,double R);
	virtual ~inscribed();

	virtual void display();
};

