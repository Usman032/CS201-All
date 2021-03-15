#include <iostream>
#include <conio.h>
using namespace std;
class A;
class B
{
    int b;
    int b2 = 25;
public:
    void getVal(int x){
        b = x;
    }
    void putVal(){
       cout <<"Value of B = " << b <<endl;
    }
    friend void add(A, B);
};

class A
{
    int a;
public:
    void getval(int x){
        a =x;
    }
    void putVal(){
        cout <<"Value of A = " << a<<endl;
    }
    friend void add(A, B);
};

void add(A objA, B objB) {
    cout << "Sum of A and B = " << objA.a + objB.b;
}


int main()
{
    A a;
    B b;
    a.getval(100);
    b.getVal(200);
    a.putVal();
    b.putVal();
    add(a,b);
    cout<< "\n------------------------------------------"<<endl;

}