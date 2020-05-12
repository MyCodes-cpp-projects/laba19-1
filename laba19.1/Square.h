#pragma once
#include <iostream>
#include <iomanip>

class Square
{
	int a;
public:
	Square();
	Square(int a);
	virtual ~Square();

	virtual void display();
};

