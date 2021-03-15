
// 18:38 Array of pointers
// 31:20 Example 5 Cards game...
#include <iostream>
using namespace std;

int main()
{
    //To avoid any confusion, we have used ‘int’ type below
    int multi[5][10];
    int rows = 5, cols = 10;
    int *ptr;
    ptr = *multi;
    for(rows = 0; rows<5; rows++)
    {
        for (cols = 0; cols < 10; cols ++) {
            cin>>multi[rows][cols];
        }
        cout<<endl;
    }
    for(rows = 0; rows<5; rows++)
    {
        for (cols = 0; cols < 10; cols ++) {
            cout<<(*ptr++)<< " ";
        }
        cout<<endl;
    }

//    cout << "The value of multi is: " << multi<<endl;
//    cout << "The value of *multi is: " << *multi<<endl;
//    cout << "The value of **multi is: " << **multi<<endl;
//
//    cout << "------------------------------------------------------"<<endl;
//    cout << "multi + 3 is: " << multi + 3<<endl;
//    cout << "*multi + 3 is: " << *multi + 3<<endl;
//    cout << "*(multi + 3) is: " << *(multi + 3)<<endl;
//    cout << "*(multi + 3) + 3 is: " << *(multi + 3) + 3<<endl;
//    cout << "*(*(multi + 3) + 3) is: " << *(*(multi + 3) + 3)<<endl;
    return 0;
}