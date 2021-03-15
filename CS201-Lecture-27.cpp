// https://youtu.be/V_3HrtUc7IY?t=2292
#include <iostream>
using namespace std;

class Date{
    // interface of the class
public:
    void display();        // to display the date on the screen
    void setDay(int i);    // setting the day
    void setMonth(int i);  // setting the month
    void setYear(int i);   // setting the year
    int getDay();          // getting the value of day
    int getMonth();        // getting the value of month
    int getYear();         // getting the value of year

    // Constructors of the class
    Date();
    Date(int, int);
    Date(int, int, int);
    // Destructor of the class
    ~Date ();
    // hidden part of the class
private:
    int day, month, year;
};
// defining the constructor
// default constructor. setting the date to a default date

Date::Date()
{
    day = 1;
    month = 1;
    year = 1900;
    cout << "The default constructor is called" << endl;
}

// Constructors with two arguments

Date::Date(int theDay, int theMonth)
{
    day = theDay;
    month = theMonth;
    year = 2002;
    cout << "The constructor with two arguments is called" << endl ;
}
// Constructors with three arguments

Date::Date(int theDay, int theMonth, int theYear)
{
    day = theDay;
    month = theMonth;
    year = theYear;
    cout << "The constructor with three arguments is called" << endl;
}
//Destructor
Date::~Date()
{
    cout << "The object has destroyed" << endl;
}
// The display function of the class date
void Date::display()
{
    cout << "The date is " << getDay() << "-" << getMonth() << "-" << getYear()
         << endl;
}
// setting the value of the day
void Date::setDay(int i)
{
    day = i;
}

// setting the value of the month
void Date::setMonth(int i)
{ month = i;
}

// setting the value of the year
void Date::setYear(int i)
{
    year = i;
}
// getting the value of the day
int Date::getDay()
{
    return day;
}

// getting the value of the month
int Date::getMonth()
{
    return month;
}

// getting the value of the year
int Date::getYear()
{
    return year;
}


/* Main program. We will take three date objects using the three constructors
(default, two arguments and three arguments and display the date.
*/
int main()
{
    Date date1, date2(12,12), date3(25,12,2002);   // taking objects of Date class

    // displaying the dates on the screen
    date1.display();
    date3.display();
    date2.display();

    date1.setDay(0001);
    date1.setMonth(0001);
    date1.setYear(0001);
    cout << "+++++++++++++++++++++++++++++++++++++++++++++\n\n";
    date1.display();
    date3.display();
    date2.display();
}
