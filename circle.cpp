#include" circle.h"
#include "point.h"
using namespace std;
circle::circle(point a, double r);

{
	this->a = a;
	this->r = r;
	
}
void point::draw()
{
	cout <<a.x << " " << a.y << " ";
	cout << r << " ";
	
}
double circle::S()
{
	double d0 = r*r*(22 / 7); 

}
double circle::P()
{
	double d1 = 2*r*(22/7);

}
