// BC200206062
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int age;
    char repeat = 'y';

    do {
    cout<<"Enter ur age"<<endl;
    cin>>age;
    cout<<"Your age is: "<<age<<endl;

    cout<<"Want to exit? (y/n)"<<endl;
    cin>>repeat;

    }
    while (repeat == 'y' || repeat == 'Y');

    cout<<"Good Bye!"<<endl;

    return 0;
}