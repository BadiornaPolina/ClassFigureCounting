#pragma once
#include "Figure.h"
class Circle:public Figure
{
	float diametr;
	float perimetr, square;
public:
	void set_diametr(float newd);
	void set_perimetr();
	void set_square();
	float get_perimetr();
	float get_square();
	Circle(string name,float diametr,float leng,float square);
	~Circle();
};

