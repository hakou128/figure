#include "point.h"
using namespace std;
point::point(double x, double y)
{
	this->x = x;
	this->y = y;
}
void point::draw()
{
	cout << x << " " << y << endl;

}
double point::S()
{
	return 0;
}
double point::P()
{
return 0;
}
