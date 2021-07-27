
/* A pointer is just a variable that holds the address of 
 * another variable.
 * The type of pointer must be same for holding the address of 
 * specific type of variable. As for example to hold the address 
 * of an interger type variable we must define the pointer as interger type
 */

#include <iostream>

int main()
{
	int number = 5;
	int* ptrNum = &number; // pointer variable is assigned with 
				// the address of the variable number



// Display the address of the number variable
	std::cout << "The address of number is: " << &number << std::endl;
	std::cout << "The value of ptrNum is: " << ptrNum << std::endl;
// The above two output give the same address
	
	std::cout << "The address of ptrNum is :" << &ptrNum << std::endl;
	



	std::cout << "The number is : " << number << std::endl;

	// now we change the value of number by using pointer
	*ptrNum = 29;

	std::cout << "The number is now: " << number << std::endl;


	return 0;

}
