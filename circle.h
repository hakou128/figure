#pragma once


#include <iostream>

#ifndef CIRCLE_H
#define CIRCLE_H
#include "figure.h"
#include "point.h"
class circle : public figure {

private:
	point a;
	double r ;

public:

	circle(point a, double r);

	virtual void draw();
	virtual double S();
	virtual double P();


};

#endif

