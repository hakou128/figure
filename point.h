#pragma once


#ifndef POINT_H
#define POINT_H
#include <iostream>
#include "figure.h"
class point : public figure
{
private:
	double x;
	double y;
public:
	friend rectangle;
	point() {};
	point(double x , double y);

	virtual void draw() ;
	virtual double S() ;
	virtual double P();


};

#endif