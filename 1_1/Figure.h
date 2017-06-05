#pragma once
#include <iostream>
#include<string>
using namespace std;
class Figure
{
	float perimetr;
	float square;
	string name;
public:
	virtual void set_name(string newname);
	virtual void set_perimetr(float newperimetr);
	virtual void set_square(float square);
	virtual float get_perimetr();
	virtual float get_square();
	virtual string get_name();
	Figure(string name,float perimetr,float square);
	~Figure();
};

