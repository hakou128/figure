#include "rectangle.h"
#include "point.h"
using namespace std;
rectangle::rectangle(point a1, point b1, point c1)
{
	this->a = a1;
	this->b = b1;
	this->c = c1;
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
