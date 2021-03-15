#include <bits/stdc++.h>
#include <fstream>
#include <iostream>
using namespace std;

int main () {
    char data[100];
    ifstream sourceFile;
    ofstream destFile;
    char name[20] ;
    int salary;
    sourceFile.open("employeein.txt");
    destFile.open("employeeout.txt", ios::out);
    if(!sourceFile || !destFile){
        cout << " Could not open the file";
        exit(1);
    } else
    {
        destFile << "Name" << "\t" << "Salary" << endl;
        while (!sourceFile.eof())
        {
            sourceFile >> name >> salary;
            destFile << name << "\t" << salary + 2000<<endl;
//           cout << name << "\t" << salary <<endl;
        }

    }
    sourceFile.close();
    destFile.close();

    return 0;
}