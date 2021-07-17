// This program shows the use of structure inside structure



#include <iostream>

struct Distance
{
	int feet;
	float inches;
};

struct Room
{
	Distance length;
	Distance width;
};

int main()
{
	float l;
	float w;

	Room dining;
	dining.length.feet = 13;
	dining.length.inches = 6.5;
	dining.width.feet = 10;
	dining.width.inches = 0.0;

	Room r1 = {{13, 6.5}, {10, 0.0}}; // Another way to initialize the member values
	
	l = r1.length.feet + r1.length.inches/12;
	w = r1.width.feet + r1.width.inches/12;
	
	std::cout << "Area of the room r1 is: " << l*w << " square feet" 
		<< std::endl;

	
	l = dining.length.feet + dining.length.inches/12;
	w = dining.width.feet + dining.width.inches/12;

	std::cout << "Area of dining room is: " << l*w << " square feet" 
		<< std::endl;


	return 0;
}

