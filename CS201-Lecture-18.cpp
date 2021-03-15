/* create a file payroll.txt in a folder and
 * then run this .cpp file in that folder   */

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    char ch;
    char name[50];      // used to read name of employee from file
    char sal[10];       // used to read salary of employee from file
    char dept[30];      // used to read dept of employee from file
    ifstream inFile;    // Handle for the input file
    ofstream outFile;
    ofstream outFileTable;

    char inputFileName[] = "payroll.txt";      // file name, this file is in the current directory
    char outputFileName[] = "outfile.txt";
    char outputText[] = "welcome.txt";
    inFile.open(inputFileName);                // Opening the file
    outFile.open(outputFileName);
    outFileTable.open(outputText);


    // checking that file is successfully opened or not
    if (!inFile)
    {
        cout << "Can't open input file named " << inputFileName << endl;
        exit(1);
    }
    if (!outFile)
    {
        cout << "Can't open output file named " << outputFileName << endl;
        exit(1);
    }
//     Reading the complete file word by word and printing on screen
    while (!inFile.eof())
    {
        inFile >> name >> sal >> dept;
        cout <<name << "\t" << sal << " \t" << dept << endl;
    }

//  get()
//    write from one file (payroll.txt) to another one (outfile.txt)
    while (!inFile.eof())
    {
        inFile.get(ch);
        outFile.put(ch);    //  to another one (outfile.txt)
        cout<<ch;
    }
    inFile.close();
    outFile.close();
    if(!outFileTable)
    {
        cout << "Can't open output file named " << outputText << endl;
    }
    outFileTable<<"Welcome to VU CS201 Lecture 18";
    outFileTable.close();
    return 0;
}