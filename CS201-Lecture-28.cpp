#include <iostream>
using namespace std;
class   MyDate
{
public:     // public members are below
  /* Parameterless constructor of MyDate class */
    MyDate()
    {
        cout   <<   "\n xcxccxcxcxc Parameterless constructor called ...";
        month   =   day   =   year   =   0;       //  all data member initialized to 0
    }

    /* Parameterized constructor of MyDate class. It assigns the parameter values  to the
……..data members of the class */
    MyDate(int month, int day, int year)
    {
        cout   <<   "\n Constructor with three int parameters called ...";
        this->month   =   month;   // Notice the use of arrow operator ( -> )
        this->day   =   day;
        this->year   =   year;
    }

    /* Destructor of the MyDate class */
    ~MyDate ( )
    {
        cout   <<   "\n Destructor called ...";
    }


    /* Setter function for the month data member. It assigns the parameter value to
    the month data member */
    void setMonth ( int month )
    {
        this->month   =   month;
    }

    /* Setter function for the day data member. It assigns the parameter value to the
        day data member */
    void setDay ( int day )
    {
        this->day   =   day;
    }

    /* Setter function for the year data member. It assigns the parameter value to the
        year data member */
    void setYear ( int year )
    {
        this->year   =   year;
    }

    /* Getter function for the day data member. It returns the value of the day data
        member */
    int getDay ( )
    {
        return   this->day;
    }

    /* Getter function for the month data member. It returns the value of the
         month data member */
    int getMonth ( )
    {
        return   this->month;
    }

    /* Getter function for the year data member. It returns the value of the year data
        member */
    int getYear ( )
    {
        return   this->year;
    }

    /* A function to set all the attributes (data members) of the Date object */
    void setDate ( int day, int month, int year )
    {
        this->day   =   day;
        this->month   =   month;
        this->year   =   year;
    }

private:                  // private members are below
    int   month,   day,   year;
    double d1;
};

int main(void)
{
//    MyDate md;
//    md.getDay();
    MyDate   *dptr;
    int *iPtr;
    dptr->getDay();
    // Declared a pointer dptr to MyPointer class object
    dptr   =   new   MyDate [10];
    iPtr = new int;

    *iPtr = 2;
    cout <<"iPtr " <<iPtr<<"size iPtr "<<sizeof (iPtr);
    cout <<sizeof (MyDate)<<endl;
    delete []dptr;
    return 0;
}

