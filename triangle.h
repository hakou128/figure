#pragma once
#include <iostream>

#ifndef TRIANGLE_H
#define TRIANGLE_H
#include "figure.h"
#include "point.h"
class triangle : public figure {
	
	private:
		point a;
	    point b;
		point c;

	public:
		
		triangle(point a, point b,point c);

		virtual void draw();
		virtual double S();
		virtual double P();


	};

#endif