// BC200206062
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int age;
    char repeat = 'y';

    while(repeat == 'y' || repeat == 'Y')
    {
    cout<<"Enter ur age"<<endl;
    cin>>age;
    cout<<"Your age is: "<<age<<endl;

    cout<<"Want to enter again? (y/n)"<<endl;
    cin>>repeat;

    }
    cout<<"Good Bye!"<<endl;

    return 0;
}