#include"triangle.h"
#include "point.h"
using namespace std;
triangle::triangle(point a, point b, point c) 
{
	this->a = a;
	this->b = b;
	this->c = c;
}
void triangle::draw()
{
	cout << a.x << " " << a.y << " ";
	cout << b.x << " " << b.y << " ";
	cout << c.x << " " << c.y << " ";
}
double triangle::S()
{
	double d4 = sqrt(((a.x - b.x)*(a.y - b.y)) + sqrt((a.x - c.x)*(a.y - c.y)) + sqrt((b.x - c.x)*(a.y - b.y)) / 2)*(sqrt((a.x - b.x)*(a.y - b.y)) + sqrt((a.x - c.x)*(a.y - c.y)) + sqrt((b.x - c.x)*(a.y - b.y)));
}
double triangle::P()
{
	double d5 = sqrt((a.x - b.x)*(a.y - b.y)) + sqrt((a.x - c.x)*(a.y - c.y)) + sqrt((b.x - c.x)*(a.y - b.y));

}
