#include <iostream>
using namespace std;
class myClass2;
class myClass1{
private:
    int topSecret;
    double b,c,d;

public:
    void display() const{
        cout << "topSecret of myClass1 is = " <<topSecret <<endl;
    }
    myClass1()
    {
        topSecret = 100; }
        friend void AddBoth(myClass1, myClass2);
};
class myClass2{
private:
    int topSecret, b, c, d;
public:
    void display(){
        cout << "topSecret of myClass1 is = " <<topSecret <<endl;
    }
    myClass2()
    {
        topSecret = 100; }
    friend void AddBoth(myClass1, myClass2);
};
void AddBoth(myClass1 obj1, myClass2 obj2){
    cout << "AddBoth() = " << obj1.topSecret + obj2.topSecret << endl;
}
int main() {
    myClass1 objClass1;
    myClass2 objClass2;
    cout << sizeof (objClass1) << " " << sizeof (objClass2) <<endl;
    objClass1.display();
    objClass2.display();
    cout << "\n._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._-._.\n";
    AddBoth(objClass1, objClass2);
    objClass1.display();
    objClass2.display();
    return 0;
}
