#include "stdafx.h"
#include "Circle.h"
#include "Figure.h"
#define _USE_MATH_DEFINES // for C++
#define M_PI 
#include <cmath>
Circle::Circle(string name, float diametr, float perimetr, float square) :Figure(name, perimetr, square)
{
	set_diametr(diametr);
	set_perimetr();
	set_square();
}


Circle::~Circle()
{
}
void Circle::set_diametr(float newd)
{
	diametr = newd;
}
void Circle::set_perimetr()
{
	perimetr = diametr*3.141592653;
}
void Circle::set_square()
{
	square = 3.141592653*((diametr / 2)*(diametr / 2));
}
float Circle::get_perimetr()
{
	return perimetr;
}
float Circle::get_square()
{
	return square;
}