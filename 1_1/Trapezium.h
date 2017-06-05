#pragma once
#include <iostream>
#include<string>
#include "Figure.h"
using namespace std;
class Trapezium: public Figure
{
	int a, b, c, d;
	float h, perimetr, square;

public:
	void set_side(int na, int nb, int nc, int nd);
	float set_h();
	void set_square();
	void set_perimetr();
	float get_perimetr();
	float get_square();
	Trapezium(string name, int a, int b, int c, int d, float perimetr, float square,float h);
	~Trapezium();
};

