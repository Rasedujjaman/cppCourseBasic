/*
In this cpp code we have dynamically allocated the row and column of  a 2D array (matrix)
and prompt the user to enter the array elements and display the matrix
Finally the memory is deallocated.

// 2D array in the memory is allocated as array of array 

// for better understanding see the link below
   https://aticleworld.com/access-two-dimensional-array-using-pointers-in-c/

*/

#include <iostream>

using namespace std;

int main()
{

    int **matrix;  // pointer to pointer variable
    int numRow, numCol;
    cout << "Give the number of rows:";
    cin >> numRow;
    cout << "Give the number of columns: ";
    cin >> numCol;

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
            cin >> matrix[i][j];
        }
    }

// To display the matrix using index
    cout << "The matrix is: " << endl;
       for(int i = 0; i< numRow; i++)
    {

        for(int j = 0; j< numCol; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

//
// Another way to access the matrix element (by using pointer arithmetic)s
    cout << "The matrix is: " << endl;
       for(int i = 0; i< numRow; i++)
       {
           for(int j = 0; j< numCol; j++)
           {
               cout << *(*(matrix + i)+j) << " "; // two level derefference: first dereference allows to go to a particular row, and the next level derefernce go 
                                                  // the collumn
           }
           cout << endl;
       }


    
    // deallocate the memory
    for(int i = 0; i< numRow; i++)
    {
        delete matrix[i];
    }
    delete matrix;




    return 0;
}
