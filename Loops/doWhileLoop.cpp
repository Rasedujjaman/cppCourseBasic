/* In this c++ program we will show how to use the do-while loop
 * In general a loop is one which perform a specific jobs 
 * repeatedly */

/**************************************************************
//the structure of do-while loop is as follows
   do {
 *   perform the task;
 *   }while(check condition)
 *
 */
// do-while loop must execute onec and then check the condtion
//**************************************************************



/* Here we will perform the summation of "n" natural number by using 
 *do-while loop: summation = 1 + 2 + 3 + ........ + n */


#include <iostream>

int main()
{
	int num; // the nth number
	int summation = 0; // we initialize the summation as 0

	std::cout << "Give the nth number: ";
	std::cin >> num;

	// The actual calculation is preformed using do-while loop
	int i = 0;
	do
	{
		//summation = summation + i;
		summation += i;
		i++ ;
	}while(i <= num);

	// Display the result
	
	std::cout << "The summation of 1 to "<< num << " is : " << summation
		<< std::endl;

	return 0;
}




