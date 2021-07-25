/* In this program we will see how to return multiple value from a function
 * by using pointer. 
 *
 * We will create an array of size given by the user and then find the max and min 
 * value and display the result.
 *
 * */


#include <iostream>

// Function that calculate the max and min value in the array
void myMaxMin(int number[], int size, int* max, int* min)
{
	// finding the maximum value
	for(int i = 1; i< size; i++)
	{
		if(number[i] > *max)
			*max = number[i];
	}
	
	// finding the mininum value in the array
	for(int i = 1; i< size; i++)
	{
		if(number[i] < *min)
			*min = number[i];
	}
}

// The main function
int main()
{
	int sizeArray, min, max;
	int* number;

	std::cout << "Give the size of array: ";
	std::cin >> sizeArray;

	// Allocate the memory dynamically
	number = new int(sizeArray);

	// Enter the element of the array
	for (int i = 0; i< sizeArray; i++)
	{
		std::cout << "Element [" << i << "]:";
		std::cin >> *(number + i);
	}

	// Calculate the maximum and minimum in the array
	max = number[0];
	min = number[0];
	myMaxMin(number, sizeArray, &max, &min);

	// display the output
	std::cout << "The max value is: " << max << std::endl;
	std::cout << "The min value is: " << min << std::endl;

	// deallocate the memory
	delete [] number;

}
