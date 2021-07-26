/*
In this cpp code we have dynamically allocated the row and column of  a 2D array (matrix)
and prompt the user to enter the array elements and display the matrix
Finally the memory is deallocated.

// 2D array in the memory is allocated as array of array 

// for better understanding see the link below
   https://aticleworld.com/access-two-dimensional-array-using-pointers-in-c/

*/

#include <iostream>
#include <iomanip>


int main()
{
	

	int **matrix;  // pointer to pointer variable
   	int numRow, numCol;
	std::cout << "Give the number of rows:";
   	std::cin >> numRow;
    	std::cout << "Give the number of columns: ";
    	std::cin >> numCol;

    matrix = new int*[numRow];  // alloacate momory for the number of row 

    for(int i = 0; i< numRow; i++)
    {
        matrix[i] = new int[numCol];  // allocate momory for number of columns for each row
    }


    // promppt the user to get the input 

    for(int i = 0; i< numRow; i++)
    {

        for(int j = 0; j< numCol; j++)
        {
         std::cout << "Matrix["<<i<<j<< "]:";  
	 std::cin >> matrix[i][j];
        }
    }

// To display the matrix using index
    std::cout << "The matrix is: " << std::endl;
    //std::cout << std::setw(3);
       for(int i = 0; i< numRow; i++)
    {

        for(int j = 0; j< numCol; j++)
        {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }

//
// Another way to access the matrix element (by using pointer arithmetic)s
    std::cout << "The matrix is: " << std::endl;
       for(int i = 0; i< numRow; i++)
       {
           for(int j = 0; j< numCol; j++)
           {
               std::cout << *(*(matrix + i)+j) << " "; // two level derefference: first dereference allows to go to a particular row, and the next level derefernce go 
                                                  // the collumn
           }
           std::cout << std::endl;
       }


    
    // deallocate the memory
    for(int i = 0; i< numRow; i++)
    {
        delete matrix[i];
    }
    delete matrix;




    return 0;
}
