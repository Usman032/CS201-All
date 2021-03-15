#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

int main() {
    string fromFileSource;
    char str[200] = "abc";
    ifstream openFile;
    ofstream writeToFile;
    openFile.open("open.txt");
    writeToFile.open("write.txt");
    if(!openFile || !writeToFile){
        cout<< "could not open!"<<endl;
    }
    openFile.getline(str, sizeof (str),'\n');

    cout << "str +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++"<< endl;
    cout << str;
    openFile.close();
    writeToFile.close();
    return 0;
}
