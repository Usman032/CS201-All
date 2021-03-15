#include <iostream>
using namespace std;

int main() {
    struct address{
        char streetAddress[100];
        char city[50];
        char country[50];
    }address1;

    struct Student{
        char name[64];
        char course[128];
        int age;
        int year;
        char address[100];
        struct address add;
        float GPA;
    };

    Student std1 = {"Ali", "CS201", 19, 2002, "Korangi",
                  "PAFWA", "Karachi", "Pakistan", 3.75 };

    Student s[100]; // array of data type "Student"
    Student *sPtr;  // it means sPtr is a pointer to a data type of type Student;
    Student s1;
    sPtr = &s1; /* Now, we cannot say sPtr.name because the . operator has precedence over the * operatoe
                * and it evaluate to something like a pointer to something. But that is not what we want.
                * a way out is to do like this -- > *(sPtr).name; Now, the * operator will evaluate first
                * BUT an easier and often used way is like this sPtr ->name and it is the same as
                * s1.name . But s1 is a variable of type Student and sPtr is a pointer to the vatiable s1 */

//    cout  << std1.name << '\n'<< std1.GPA << '\n'<< std1.address << '\n' <<std1.address << endl;
    Student std[10];

    return 0;
}
