/* In this cpp code we will understand the concept of array of pointers
 * There are some situation where we want to store
 * the address of several pointers to an int or char or any other 
 * data type. 
 *
 * The decleration is as follows
 * data_type* pointerVariable[sizeArray]
 * As for example: double* ptrArray[20];
 * In the abouve example we want to create a pointer array of size 20 which 
 * will hold the address of 20 double type variable.
 *
 */

#include <iostream>

const int MAX = 5;

int main()
{
	double arrayNum[MAX] = {2.5, 3, 9, 11, 39.4};
	double* ptr[MAX];

//Assign the address of the double type to the pointer
	for (int i = 0; i< MAX; i++)
	{
		ptr[i] = &arrayNum[i];
	}
// Display the content of the pointer array

	for(int i = 0; i<MAX; i++)
	{
		std::cout << "arrayNum[" << i << "]:";
		std::cout << *ptr[i] << std::endl;
	}


	return 0;
}



/* In the above code the variable ptr is an arry of size 
 * MAX number of double pointers. Thus each element of ptr now
 * holds a pointer to a double value(i.e the address of a double type
 * variable).
 */
