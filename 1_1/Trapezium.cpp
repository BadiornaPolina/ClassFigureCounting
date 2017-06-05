#include "stdafx.h"
#include "Trapezium.h"
#include "Figure.h"
#include <iostream>
#include<string>
#include<math.h>
using namespace std;

Trapezium::Trapezium(string name, int a, int b, int c, int d,float h,float perimetr, float square) :Figure(name, perimetr, square)
{
	set_side(a, b, c, d);
	set_h();
	set_perimetr();
	set_square();
	
}


Trapezium::~Trapezium()
{
}
void Trapezium::set_side(int na, int nb, int nc, int nd)
{
	a = na;
	b = nb;
	c = nc;
	d = nd;
}
float Trapezium::set_h()
{
	h = c*c - pow((((a - b)*(a - b) + c*c - d*d) / (2 * (a - b))),2);
	h = sqrt(h);
	h = fabs(h);
	return h;
}
void Trapezium::set_square()
{
	square = (a + b)*h*0.5;
}
void Trapezium::set_perimetr()
{
	perimetr = a + b + c + d;
}
float Trapezium::get_perimetr()
{
	return perimetr;
}
float Trapezium::get_square()
{
	return square;
}