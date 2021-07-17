

/* In this program we will learn how to use struct */

// Here we will consider a point having x and y coordinate
//
//

// Defining the structure

struct Point{
	double x;
	double y;
};


#include <iostream>


int main()
{	
	Point p1;
	p1.x = 4.3;
	p1.y = 9;

	Point* p2 = new Point;
	p2->x = 5;
	p2->y = 8;


	Point p3 = {4.3, 5.9};
	
	std::cout << "p1(x, y) = " <<"(" << p1.x << ", " << p1.y << ")" 
		<< std::endl;

	std::cout << "p2(x, y) = " << "(" << p2->x << ", " << p2->y << ")"
		<< std::endl;

		
	std::cout << "p3(x, y) = " << "(" << p3.x << ", " << p3.y << ")"
		<< std::endl;
	
	
	// delete the p2 
	delete p2;

	return 0;
}

