// BC200206062
#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;
int main()
{

    int variableSwitch;
    int repeat =9;


do
    {  
        cout<<"Enter 1, 2, 3 or 0"<<endl;
        cin>>variableSwitch;
 
        switch (variableSwitch)
        {
        case 1:
            cout<<"entered char is '1'"<<endl;
            break;
        case 2:
            cout<<"entered char is '2'"<<endl;
            break;
        case 3:
            cout<<"entered char is '3'"<<endl;
            break;
        case 0:
            repeat =0;
            cout<<"Good bye!";
            break;
        default:
            cout << "Invalid selection!" <<endl;
            cout << "Please enter 1, 2 or 3" <<endl;
            break;
        }
    }
    while (repeat !=0);
    return 0;
}
