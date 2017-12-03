#include "figure.h"
#include "point.h"
#include"circle.h"
#include"rectangle.h"
#include"triangle.h"



using namespace std;

	 
	 void main() {

		 const int numObjects = 3;
		 Figure **objects = new Figure*[newObjects];

		 objects[0] = new point(2.5,-2,5);
		 objects[1] = new Rectangle(3, 2, 5);
		 point(1.0,0.0);
		 point(0.0,0.0);
		 point(2.5,0.0);
		 delete[]objects;

		 objects[2] = new Point(34,5,6);

		 for (int i = 0; i < numObjects;i++) {
		 
			 cout << "i=" << i << ":" << endl;
			 objects[i]->draw();
			 cout << "s=" << objects[i]->S()<<endl;
			 cout << "p=" << objects[i]->P()<<endl;
		 
		 }
		



	/* cout << "\n enter Coordinates point :" << endl;

	 cout << x << " "endl;
	 cout << y << " "endl;*/
 /*
	 cout << "\n enter Coordinates centre :" << endl;
	 cout << a.x " " << endl;
	 cout << a.y" " << endl;
	 cout << "\n enter radios:" << endl;
	 cout << r " " << endl;
	 cout << "\n show the square" << endl;
	 cout << d0 << endl;
	 cout << "\n show the perimeter" << endl;
	 cout << d1 << endl;

	 cout << "\n enter Coordinates points :" << endl;
	 cout << a.x " " << endl;
	 cout << a.y" " << endl;
	 cout << b.x" " << endl;
	 cout << b.y" " << endl;
	 cout << c.x" " << endl;
	 cout << c.x" " << endl;
	 cout << "\n show the square" << endl;
	 cout << d2 << endl;
	 cout << "\n show the perimeter" << endl;
	 cout << d3 << endl;
 
	 cout << "\n enter Coordinates points :" << endl;
	 cout << a.x << " "  endl;
	 cout << a.y<< endl;
	 cout << b.x<< endl;
	 cout << b.y<< endl;
	 cout << c.<< endl;
	 cout << c.x <<  endl;
	 cout << "\n show the square" << endl;
	 cout << d4 << endl;
	 cout << "\n show the perimeter" << endl;
	 cout << d5 << endl;*/
 }


