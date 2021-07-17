/* In this c++ program we will show how to use the while loop
 * In general a loop is one which perform a specific jobs 
 * repeatedly */


/* Here we will perform the summation of "n" natural number by using 
 * while loop: summation = 1 + 2 + 3 + ........ + n */


#include <iostream>

int main()
{
	int num; // the nth number
	int summation = 0; // we initialize the summation as 0

	std::cout << "Give the nth number: ";
	std::cin >> num;

	// The actual calculation is preformed using while loop
	int i = 1;
	while(i <= num)
	{
		//summation = summation + i;
		summation += i;
		i++ ;
	}

	// Display the result
	
	std::cout << "The summation of 1 to "<< num << " is : " << summation
		<< std::endl;

	return 0;
}




