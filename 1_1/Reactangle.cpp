#include "stdafx.h"
#include "Reactangle.h"
#include "Figure.h"

Reactangle::Reactangle(string name, int a, int b, int perimetr, float square) : Figure(name,perimetr, square)
{
	set_side(a, b);
	set_square();
	set_perimetr();
}


Reactangle::~Reactangle()
{
}
void Reactangle:: set_side(int na, int  nb)
{
	a = na;
	b = nb;
}
void Reactangle::set_perimetr()
{
	perimetr = (a + b) * 2;
}
void Reactangle::set_square()
{
	square = a*b;
}
float Reactangle::get_perimetr()
{
	return perimetr;
}
float Reactangle::get_square()
{
	return square;
}