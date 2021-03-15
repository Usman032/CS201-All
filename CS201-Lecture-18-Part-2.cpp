/* create a file inputsourcefile.txt in a folder and
 * then run this .cpp file in that folder   */

#include <iostream>
#include <fstream>
#include <cstring>
#include <cstdlib>

using namespace std;
int main() {

    // for input source file
    char fName[50];
    char mInitial[2];
    char lName[10];
    // for output (to be) generated file

    char password[4];
    password[4] = '\0';

    ifstream inFile;
    ofstream outFile;
    char inputFileName[] = "inputsourcefile.txt";
    char outputFileName[] = "outputgeneratedfile.txt";
    inFile.open(inputFileName);
    outFile.open(outputFileName);

    if (!inFile){
        cout<<"Could not open file "<<inputFileName<<endl;
        exit(1);
    }
    if (!outFile){
        cout<<"Could not open file "<<outputFileName<<endl;
        exit(1);
    }
    while (!inFile.eof())
    {
        //  copy from source input file into the arrays created before...
        inFile >> fName >> mInitial >> lName;

        //  print on the console from source input file ...
        cout<< fName << '\t' << mInitial << '\t' << lName <<endl;

        password[4] = '\0';

        //  write from source input file into into the output file...
        outFile<< fName << '\t' << strcat(mInitial, lName) << '\t' << strncpy(password, fName, 4) << '\n';
    }

    inFile.close();
    outFile.close();
    return 0;
}
