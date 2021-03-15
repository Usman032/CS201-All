#include <iostream>
using namespace std;

int main() {
    int rows, columns, searchValue;
    cout<<"Please enter number of row."<<endl;
    cin>>rows;

    cout<<"Please enter number of columns."<<endl;
    cin>>columns;

    int arr2D[rows][columns];
    cout<<"Please Elements of the 2D array."<<endl;

// populate 2D array (arr2D).
    for (int i = 0; i < rows; i++) {
        // second loop for rows
        for (int j = 0; j < columns; j++) {
            cin>>arr2D[i][j] ;
        }
        cout << endl;
    }

// print Elements of the array.
    cout<<"The Elements of the 2D array are:"<<endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cout <<" "<< arr2D[i][j] ;
        }
        cout << endl;
    }

// search in 2d array/
    cout<<"Enter a number to search:"<<endl;
    cin>>searchValue;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
//                if(searchValue == arr2D[i][j] || searchValue == arr2D[i][j]){
            if(searchValue == arr2D[i][j]){
                cout<<searchValue <<" found at " <<i<<" "<<j<<endl;
            }
        }
        cout << endl;
    }
    return 0;
}
