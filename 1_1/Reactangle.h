#pragma once
#include "Figure.h"
class Reactangle:public Figure
{
	int a, b;
	float perimetr, square;
public:
	void set_side(int na, int nb);
	void set_perimetr();
	void set_square();
	float get_perimetr();
	float get_square();
	Reactangle(string name, int a, int b, int perimetr,float square);
	~Reactangle();
};

