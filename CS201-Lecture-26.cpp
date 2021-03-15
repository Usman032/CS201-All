#include <iostream>
using namespace std;

int main() {
    int month = 2;
    struct structureDate
    {
        int day, month, year;
    };
    structureDate myDate{};
    myDate.day = 12;
    
    class classDate
    {
        int day = 12, month, year;
    public:
        int setDay(){
            cin >> day;
            return day;
        }
    };
    classDate myDateClass;
    cout <<"Class method " << myDateClass.setDay();
    return 0;
}
