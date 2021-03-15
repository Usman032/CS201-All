# include <iostream>
//#include <math.h>
using namespace std;
int f(int);
void square(double*);
int main()
{
    double x = 123.456;
//  Call by reference...
    cout <<"\n// demo call my value..."<<endl;
    int i = 10;
    cout <<"In main i = " << i<<endl;
    f(i);
    cout <<"Back in main i = " <<i<<endl;

// call by reference...
    cout <<"\n// demo call my reference..."<<endl;
    cout<<"In main(), before calling square(), x = "<<x << endl;
    square(&x);
    cout<<"In main(), after calling square(), x = "<<x << endl;
    return 0;
}

int f(int i)
{
    cout <<"In function f, i = "<<i<<endl;
    i *= 2;
    cout <<"In function f, i is now = " <<i<<endl;
    return i;
}

void square(double*x)
{
    *x = *x * *x;
}
