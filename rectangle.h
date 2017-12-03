#pragma once

#include <iostream>

#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "figure.h"
#include "point.h"
class rectangle: public figure {

private:
	point a;
	point b;
	point c;

public:

	rectangle(point a, point b, point c);

	virtual void draw();
	virtual double S();
	virtual double P();


};

#endif
