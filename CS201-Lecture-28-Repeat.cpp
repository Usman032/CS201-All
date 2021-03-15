#include <iostream>
using namespace std;

class myClass
{
    public:
    int age1, age2, age3;
    double f1;

};
class myClass2
{
    int a,b,c;
    char d;
};

int main() {
    myClass mc, mc3;
    myClass2 mc2;
    //cout <<"size of object of my class = "<<sizeof(mc)<<endl;
    cout<<sizeof(mc.age1)<<endl;
    cout<<sizeof(mc.age2)<<endl;
    cout<<sizeof(mc.age3)<<endl;
    cout<<sizeof(mc.f1)<<endl;
    cout <<sizeof(mc)<<endl;
    cout<<"------------\n";
    cout <<sizeof(mc2)<<endl;

    return 0;
}
