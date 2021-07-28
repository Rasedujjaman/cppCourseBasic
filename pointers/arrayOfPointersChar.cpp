/* In this cpp code we will understand the concept of array of pointers
 * There are some situation where we want to store
 * the address of several pointers to an char or any other 
 * data type. 
 *
 * The decleration is as follows
 * data_type* pointerVariable[sizeArray]
 * As for example: char* ptrArray[20];
 * In the abouve example we want to create a pointer array of size 20 which 
 * will hold the address of 20 char type variable.
 *
 */

#include <iostream>

const int MAX = 3;

int main()
{
	const char* names[MAX] = {"Karim", "Saha Alam", "Sujon"};
	

//Display the value of the above array of pointer to char type variable
	for (int i = 0; i< MAX; i++)
	{
		std::cout << "Value of names[" << i << "] = ";
		std::cout << (names + i) << std::endl;
	}
// Display the content of the pointer array

	for(int i = 0; i<MAX; i++)
	{
		std::cout << "names[" << i << "]:";
		std::cout << *(names + i) << std::endl;
	}


	return 0;
}



/* In the above code the variable ptr is an arry of size 
 * MAX number of char pointers. Thus each element of ptr now
 * holds a pointer to char (i.e the address of a char type
 * variable).
 *
 * Here one important point to be noted: 
 * We have used an array of pointers to character to store a list of string
 * This is how stnadard C compilers handle string as C language does not 
 * directly support string data type.
 */
