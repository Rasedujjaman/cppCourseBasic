/*
Pointer is the most important concept in programming and it takes some effort to instill this
idea properly. Most of the programmer stuggles to use pointer properly and effectively. 

In this cpp code we will try to understand how a pointer is used to dynamically allocate 
memory for one dimensional array

The user will be asked to give the size of the array to allocate the memory
here we allocate the memory for the array at runtime of the program: this is called dynamic memory allocation. The compiler does not know in advance how much memroy will be allocated for the array

In c++, new() operator is used to dynamically allocate memory while in C programming, there are some dedicated function called malloc(), alloc() for dynamically allocate momory
*/


#include <iostream>

int main()
{
    int sizeArray;
    std::cout << "Give the size of the array: ";
    std::cin >> sizeArray;

    int *numArray;   // to hold integer type array 
    numArray = new int(sizeArray);  // Allocate the memory for the array

   // Get the input from the user
    for (int i = 0; i< sizeArray; i++)
	{
    
	std::cout << "Enter the element [" << i << "]:";
   	std::cin >> *(numArray + i);
	}

    // print the array
    std::cout << "The output array is: ";
    for (int i = 0; i< sizeArray; i++)
    {
	 std::cout << *(numArray + i ) << " ";
    }

    std::cout << std::endl;


    // Deallocate the memory

    delete [] numArray; // Delete the whole array
    numArray = NULL;  // Good practice to put NULL at the pointer variable   

}
