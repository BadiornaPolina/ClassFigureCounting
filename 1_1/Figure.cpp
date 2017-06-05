#include "stdafx.h"
#include "Figure.h"
#include <iostream>
#include<string>
using namespace std;

Figure::Figure(string name, float perimetr, float square)
{
	set_name(name);
	set_perimetr(perimetr);
	set_square(square);
}


Figure::~Figure()
{

}
 void Figure::set_name(string newname)
{
	name = newname;
}
 void Figure::set_perimetr(float newperimetr)
 {
	 perimetr = newperimetr;
 }
 void Figure::set_square(float newsquare)
 {
	 square = newsquare;
 }
 string Figure::get_name()
 {
	 return name;
 }
 float Figure::get_perimetr()
 {
	 return perimetr;
 }
 float Figure::get_square()
 {
	 return square;
 }