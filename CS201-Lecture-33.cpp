#include <iostream>
#include <iomanip>
using namespace std;

class String{
private:
    char buf[100];
public:
    void print();
    String();
    ~String();
};
void String::print(){
    cout <<"From "<<buf[100]<<endl;
}

int main(){
    String s1;
    s1.buf="asdas";
    String s2;
    s2.print();
  //  s2 = s1;


    return 0;
}
