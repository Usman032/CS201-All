#include <iostream>
#include <iomanip>
using namespace std;


class Date
{
      private:
         int   day, month, year;

      public:
        /* Parameterless constructor, it is created by the compiler automatically when we
        don’t write it for any of our class. */
        Date( )
        {
                cout << "\n Parameterless constructor called ...\n";
                month   =   day   =   year   =   0;
        }
        /* Parameterized constructor; has three ints as parameters. */
        Date(int month, int day, int year)
        {
                cout << "\n Constructor with three int parameters called ...";
                this->month   =   month;
                this->day   =   day;
                this->year   =   year;
        }

       ~Date ( )
       {
              cout << "\n Destructor called ...";
       }

};


int main(){
    int *arrPtr;
    int arr[5];
    arrPtr = arr;
    for(int i =0;i<=sizeof(arr)/sizeof(arr[0]); i++){
        cout<<arrPtr <<"\t"<<*arrPtr<<"\n";
    arrPtr++;
    *arrPtr++;

    }
//    cout <<arrPtr <<"\t"<<*arrPtr<<"\t"<<&arrPtr<<endl;
    cout <<sizeof(arr)/sizeof(arr[0])<<endl;


    return 0;
}
