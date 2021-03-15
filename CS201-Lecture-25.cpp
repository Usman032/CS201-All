/* Overload functions to print variables of different types */

#include <iostream>
using namespace std;

int add(int, int);
void subtract();

int main ()
{
    int sum;
    int diff;

    sum = add(10, 5) *  1000;

    cout << "sum = add( 10, 5) * 1000 --> " << sum << endl;

    return 0;
}

int add(int a, int b)
{
    return a + b;
}
void subtract(){
    int x = 45, y = 100, z;
    z = y - x;
    cout << "From subtract() = " << z << endl;

}


//#include <iostream>
//using namespace std;
//
//#define  MAX( A, B )  ((A) > (B) ? (A) : (B))
//inline  int  max( int a, int b )
//{
//    if ( a > b )
//        return a;
//    return b;
//}
//
//int main() {
//    int i, x, y;
//    x = 23;
//    y = 45;
//    i = MAX( x++, y++ );  // Side-effect:
//    // larger value incremented twice
//    cout << "x = " << x << "    y = " << y << '\n';
//
//    x = 23; y = 45;
//    i = max( x++, y++ );  // Works as expected
//    cout << "x = " << x << "    y = " << y << '\n';
//}