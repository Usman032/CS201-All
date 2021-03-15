#include <iostream>
#include <fstream>
#include <string>
#include <cstdio>
#include <ctime>
#include <cstring>

using namespace std;

int main() {
    ofstream writeToFile;
    ifstream readFromFile;


//    writeToFile.open("try.txt");
    readFromFile.open("names.txt");
    if (!readFromFile.is_open()){
        cout << "Could not open the file\n";
    }
    string namesFromFile;
    string try1;
    string try2;
    string name[1000];
    char *tryNames[100];
    char tryNames_2[1000];
    char c;
    for (int i = 0; i < 1000; ++i) {
        while (!readFromFile.eof()){
            readFromFile >> namesFromFile;
 //           cout << namesFromFile << endl;
//            name[i] = namesFromFile;
            getline(readFromFile,try1);
            name[i] = try1;


        }
    }
    for (int i = 0; i < 1000; i++){
        cout << name[i] << endl;
    }


    writeToFile.close();
    readFromFile.close();

    return 0;
}
