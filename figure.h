#pragma once
#include <iostream>

#ifndef FIGURE_H
#define HFIGURE_H
class point;
class circle;
class triangle;
class rectangle;

class figure
{
public:
	friend  circle;
	friend triangle;
	friend point;
	friend rectangle;
	virtual void draw() = 0;
	virtual double S() = 0;
	virtual double P() = 0;


};

#endif

