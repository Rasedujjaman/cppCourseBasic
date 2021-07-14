/* This is the first program in cpp basic course
 * This looks very simple but it contains many informations that are necessary 
 * to understand 
 *
 * The first line "include <iostream>" is called preprocessor directive
 * that tells the compiler to include this library where the codes are 
 * included for standard input/output operation. (cout and cin)
 *
 * The second line "int main()" is the main function, the begining the the execution of the
 * program. int is the return type after the execution of the main program 
 * is finished. For main program the return value goes to the operating system
 * telling that the program execution is successfull.
 * For other function which are called by main, return value to the main but 
 * the return of main function goes to the operating system.
 *
 *

*/

#include <iostream>

//using namespace std;

int main()
{
	std::cout<< "Hello World!" << std::endl;
	//cout << "Hello World!" << endl;
	return 0;

}

