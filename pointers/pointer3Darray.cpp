/*
This cpp code will show the use of pointer in three dimensional array (3D matrix)

https://aticleworld.com/void-pointer-in-c/
*/



#include <iostream>

using namespace std;

int main()
{
    int numRow, numCol, numPage;
    cout << "Give the dimensions of the array (numRow, numCol, numPage): " ;
    cin >> numRow >> numCol >> numPage;

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
                cin >> *(*(*(matrix + k)+i)+j);
            }
        }
    }


// the output matrix

    cout << "The output matrix is: " << endl;
    for(int k = 0; k< numPage; k++)
    {
        for (int i = 0; i< numRow; i++)
        {
            for(int j = 0; j< numCol; j++)
            {
                cout  << *(*(*(matrix + k)+i)+j) << " "; // dereferencing order: numPage->numRwo->numCol.
                // Its similar to reading a book. Go to a page then in a line and then read the each word.
            }
            cout << endl;
        }
        cout << endl;
    }





    // Deallocate the memory

    for(int k = 0; k<numPage; k++)
    {
        for(int i= 0; i< numRow; i++)
        {
            delete matrix[k][i];  // number of column in each row
        }
    }

    delete [] matrix;
    delete matrix;




    return 0;
}
