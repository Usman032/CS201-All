#include <iostream>
using namespace std;

int main(){

    const int  maxRows = 3;
    const int  maxCols = 3;
    const int arraySize = 3;

    int temp;
    int row, col;

    int a[maxRows][maxCols];

    // To input numbers in the array
    for (row = 0; row < maxRows; row ++)
    {
        for(col=0; col < maxCols; col ++)
        {
            cout << "Enter the value for [" << row << "] [" << col << "] : ";
            cin >> a[row][col];
        }
        cout<<endl;
    }

// Print the matrix
    cout << '\n' << "The matrix is: " << '\n';

    for ( row = 0; row < maxRows; row ++)
    {
        for ( col = 0; col < maxCols; col ++)
        {
            cout << a [row][col] << '\t';
        }
        cout << '\n';
    }
// To flip the elements of the matrix
    cout << '\n' << "The flipped (Rows) matrix is: " << '\n';

    for ( row = maxRows-1; row >= 0; row --)
    {
        for ( col = 0; col < maxCols; col ++)
        {
            cout << a [row][col] << '\t';
        }
        cout << '\n';
    }

// To flip the elements of the matrix
    cout << '\n' << "The flipped (Columns) matrix is: " << '\n';

    for ( row = 0; row<maxRows; row ++)
    {
        for ( col = maxCols - 1; col >= 0; col --)
        {
            cout << a [row][col] << '\t';
        }
        cout << '\n';
    }

// transposing
    for (row = 0; row < arraySize; row++)
    {
        for (col = row; col < arraySize; col++)
        {
// Interchange the values here using the swapping mechanism
            temp = a[row][col];	// Save the original value in the temp variable
            a[row][col] = a[col][row];
            a[col][row] = temp;	//Take out the original value
        }
    }

// print array a[] after transposing
    cout<<"\nThe transposed matrix is:\n";
    for (row = 0; row < arraySize; row ++)
    {
        for(col=0; col < arraySize; col ++)
        {
            cout <<a[row][col]<< '\t';
        }
        cout<<"\n";
    }

    return 0;
}