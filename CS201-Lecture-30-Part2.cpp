#include <iostream>
using namespace std;

struct student
{
	int rollN;
    char gender;
	int age;

};


void valdisplay(student usman);
void ptrDisplay(student *usman);
void refDisplay(student &usman);

int main(){
    
    student usman = { 1232, 'M', 34 };

    valdisplay(usman);
    cout <<"1 From main rollN = " <<usman.rollN <<" gender = " <<usman.gender <<" age = "<<usman.age <<endl;

	ptrDisplay(&usman);
    cout <<"2 From main rollN = " <<usman.rollN <<" gender = " <<usman.gender <<" age = "<<usman.age <<endl;

	refDisplay(usman);
    cout <<"3 From main rollN = " <<usman.rollN <<" gender = " <<usman.gender <<" age = "<<usman.age <<endl;
	
	return 0; 
}

void valdisplay(student usman){
    usman.age = 45;
    usman.rollN = 2000;
    usman.gender = 'm';
    cout << usman.age << " " <<usman.rollN<<" " <<usman.gender <<endl;
}

void ptrDisplay(student *salman){
	salman->age = 17;
	salman->rollN = 8000;
	salman->gender = 's';
	cout <<"\nptrDispaly = " << salman->age << " " <<salman->rollN<<" " <<salman->gender <<endl;
}

void refDisplay(student &salman){
    salman.age = 12;
    salman.rollN = 4000;
    salman.gender = 'c';
    cout <<"\nrefDisplay = " << salman.age << " " <<salman.rollN<<" " <<salman.gender <<endl;
}
