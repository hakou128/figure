#include" rectangle.h"
#include "point.h"
using namespace std;
rectangle::rectangle(point a, point b, point c)
{
	this->a = a;
	this->b = b;
	this->c = c;
}
void rectangle::draw()
{
	cout << a.x << " " << a.y << " ";
	cout << b.x << " " << b.y << " ";
	cout << c.x << " " << c.y << " ";
}
double rectangle::S()
{
	double d2 = sqrt((a.x - b.x)*(a.y - b.y))*sqrt((b.x - c.x)*(a.y - b.y));
}
double rectangle::P()
{
	double d3 = (sqrt((a.x - b.x)*(a.y - b.y))  + sqrt((b.x - c.x)*(a.y - b.y)))*2;

}
