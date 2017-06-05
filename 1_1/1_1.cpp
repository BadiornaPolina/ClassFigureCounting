// 1_1.cpp : Defines the entry point for the console application.
//������� ������� ����� Figure � ������������ �������� ���������� �������
//� ���������. ������� ����������� ������: Reactangle (�������������), 
//Circle (����), Trapezium (��������) �� ������ ��������� ������� � ���������. 
//�������������� ����������, ����� ���� ����������, ����� �� ��� ����� �������� 
//� ������� ������, � ����� � � �����������. ������� ��������: S=(a+b)*h/2

#include "stdafx.h"
#include <iostream>
#include "Figure.h"
#include "Circle.h"
#include "Reactangle.h"
#include"Trapezium.h"
using namespace std;

int main()
{
	Figure *p = 0;
	string name;
	cout << "Enter Trapezium,Reactangle or Circle:";
	cin >> name;
	if (name == "Trapezium")
	{
		int a, b, c, d;
		float perimetr=0, square=0, h=0;
		cout << "Enter a:";
		cin >> a;
		cout << "b:";
		cin >> b;
		cout << "c:";
		cin >> c;
		cout << "d:";
		cin >> d;
		p = new Trapezium(name, a, b, c, d, h, perimetr, square);
		
	}
	else if (name == "Reactangle")
	{
		int a, b;
		float perimetr = 0, square = 0;
		cout << "Enter a:";
		cin >> a;
		cout << "b:";
		cin >> b;
		p = new Reactangle(name, a, b, perimetr, square);
		//Reactangle *reac = new Reactangle(name, a, b, perimetr, square);
		//cout << "For " << name << " perimetr=" << reac->get_perimetr() << ", square=" << reac->get_square() << endl;
	}
	else if (name == "Circle")
	{
		float diametr, perimetr = 0, square = 0;
		cout << "Enter diametr:";
		cin >> diametr;
		p = new Circle(name, diametr, perimetr, square);
		//Circle *circle = new Circle(name, diametr, leng, square);
		//cout << "For " << name << " length=" << circle->get_leng() << ", square=" << circle->get_square() << endl;
	}
	cout << "Name: " << p->get_name() << endl;
	cout << "Perimetr=" << p->get_perimetr()<<endl;
	cout << "square=" << p->get_square()<<endl;
	cin.get();
	cin.get();
	return 0;
}

