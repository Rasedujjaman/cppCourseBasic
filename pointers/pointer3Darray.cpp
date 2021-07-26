/*
This cpp code will show the use of pointer in three dimensional array (3D matrix)

https://aticleworld.com/void-pointer-in-c/
*/



#include <iostream>



int main()
{
    int numRow, numCol, numPage;
    std::cout << "Give the dimensions of the array (numRow, numCol, numPage): " ;
    std::cin >> numRow >> numCol >> numPage;

    int ***matrix;  // pointer to pointer to pointer variable

    matrix = new int**[numPage];  // allocate memory for the number of pages


    for(int k = 0; k<numPage; k++)
    {
        matrix[k] = new int*[numRow];  // allocate memory to number of row in each page

        for(int i= 0; i< numRow; i++)
        {
            matrix[k][i] = new int[numCol];  // allocate memory for number of column in each row
        }
    }

    // the entry in the matrix

    for(int k = 0; k< numPage; k++)
    {
        for (int i = 0; i< numRow; i++)
        {
            for(int j = 0; j< numCol; j++)
            {
               std::cout << "Matrix[" << k << i << j << "]: ";
		std::cin >> *(*(*(matrix + k)+i)+j);
            }
        }
    }


// the output matrix

    std::cout << "The output matrix is: " << std::endl;
    for(int k = 0; k< numPage; k++)
    {
        std::cout << "Matrix(:,:,"<< k<< "): "<< std::endl;
	for (int i = 0; i< numRow; i++)
        {
            for(int j = 0; j< numCol; j++)
            {
                std::cout  << *(*(*(matrix + k)+i)+j) << " "; // dereferencing order: numPage->numRwo->numCol.
                // Its similar to reading a book. Go to a page then in a line and then read the each word.
            }
            std::cout << std::endl;
        }
        std::cout << std::endl;
    }





    // Deallocate the memory

    for(int k = 0; k<numPage; k++)
    {
        for(int i= 0; i< numRow; i++)
        {
            delete[] matrix[k][i];  //delete the number of column in each row
        }
	delete[] matrix[k];  // delete the number of row in each page
    }

    delete [] matrix;  // delete the number of page

    matrix = NULL;  // Allocate a null to the pointer variable

/* In the memory deallocation process of 3D array:
 * you first access to the page then in each page in each row delete the number of column
 * then in each page delete the number of row 
 * then delete the number of page
 * and finally allocate NULL to the pointer variable
 */


    return 0;
}
