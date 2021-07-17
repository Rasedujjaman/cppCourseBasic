/*
Create a structure called Volume that uses three variables of type Distance to model the volume of a room. Initialize a variable of type Volume to specific dimensions, then calculate the volume it represents, and print out the result.
To calculate the volume, convert each dimension from a Distance variable to a variable
of type float representing feet and fractions of a foot, and then multiply the resulting
three numbers.*/

#include <iostream>

struct Distance  // English distance
{
	int feet;
	float inches;
};

struct Volume
{
	Distance distance[3];
};

int main()
{
	Volume volumeRoom;
	// Take the input (lenght, width and height of the room)
	
	for (int i = 0; i< 3; i++)
	{
		std::cout << "Give the side"<<i<<"(feet): ";
		std::cin >>volumeRoom.distance[i].feet;
		std::cout << "Give the side"<<i <<"(inches): ";
		std::cin >>volumeRoom.distance[i].inches;
	}

	// Calculate the volume of the room
	float side[3], vol;
	for (int i = 0; i< 3; i++)
	{
		side[i] = volumeRoom.distance[i].feet + 
			  volumeRoom.distance[i].inches/12;
	}
	
	vol = side[0]*side[1]*side[2];

	std::cout << "The volume of the room is: " << vol << " cubic feet"
	          << std::endl;

	return 0;

}






