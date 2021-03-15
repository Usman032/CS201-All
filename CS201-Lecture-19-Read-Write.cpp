#include <iostream>
#include <fstream>
#include <string>
#include <cstdio>
#include <ctime>
using namespace std;

void fromFileWordByWord();
void fromFileLineByLine();
void fromFileCharacterByCharacter();
void fromFileByGETC();

int main() {
    int varSwitch;

    do{
        cout << "\nPlease Enter:\n"
                "1 for fromFileWordByWord()\n"
                "2 for fromFileLineByLine()\n"
                "3 for fromFileCharacterByCharacter()\n"
                "4 for fromFileByGETC()\n"
                "0 for exit\n";
        cin >> varSwitch;

        if (varSwitch == 0 && cin){
            break;
        }
        switch (varSwitch) {
            case 1:
                system("cls");
                cout << " ";
                fromFileWordByWord();
                break;

            case 2:
                system("cls");
                fromFileLineByLine();
                cout << " ";
                break;

            case 3:
                system("cls");
                fromFileCharacterByCharacter();
                cout << " ";
                break;

            case 4:
                system("cls");
                fromFileByGETC();
                cout << " ";
                break;
            default:
                cout << "Please enter numbers from 1 to 4";
        }
    }while (varSwitch >0);

//    fromFileWordByWord();
//    fromFileLineByLine();
//    fromFileCharacterByCharacter();
//    fromFileByGETC();

    return 0;
}


// Definitions...
void fromFileWordByWord()
{
    time_t now = time(0);
    cout << now << endl;
    ifstream inFile;
    ofstream outFile;
    string str;

    // read from file word by word...
    inFile.open("myInFile.txt", ios::in);
    outFile.open("myOutFile.txt", ios::out);
    if (inFile.is_open()) {
        while (inFile) {
            inFile >> str;
            cout << str << " ";
            outFile << str << " ";
        }

    inFile.close();
    outFile.close();
    }
    else
    {
    cout << "Could not open the file(s)";
    }
    time_t then = time(0);
    cout <<"\nIt took " << then - now << " seconds" << endl;}
void fromFileLineByLine()
{
    // read from file line by line...
    time_t now = time(0);
    ifstream inFile;
    ofstream outFile;
    string line;
    inFile.open("myInFile.txt", ios::in);
    outFile.open("myOutFile.txt", ios::out);

    if (inFile.is_open()) {
        while ((inFile)) {
            getline(inFile, line);
            cout << line;
            outFile << line;
        }
    inFile.close();
    outFile.close();
    } else
    {
    cout << "Could not open the file(s)";
    }
    time_t then = time(0);
    cout <<"\nIt took " << then - now << " seconds" << endl;
}

void fromFileCharacterByCharacter()
{
    // read from file character by character...
    time_t now = time(0);
    ifstream inFile;
    ofstream outFile;
    inFile.open("myInFile.txt", ios::in);
    outFile.open("myOutFile.txt", ios::out);

    if (inFile.is_open()) {
        while (inFile) {
            char c;
            inFile.get(c);
            cout << c;
            outFile << c;
        }
        inFile.close();
        outFile.close();
    } else
    {
        cout << "Could not open the file(s)";
    }
    time_t then = time(0);
    cout <<"\nIt took " << then - now << " seconds" << endl;
}

void fromFileByGETC()
{
    // read from file character by character...
    time_t now;
    now = time(0);
    FILE *myFile;
    ofstream outFile;
    myFile = fopen("myInFile.txt", "r");
    outFile.open("myOutFile.txt", ios::out);
    if (myFile) {
        while (feof(myFile) == 0) {
            char c;
            c = getc(myFile);
            cout << c;
            outFile << c;
        }
        fclose(myFile);
        outFile.close();
    } else
    {
        cout << "Could not open the file(s)";
    }
    time_t then = time(0);
    cout <<"\nIt took " << then - now << " seconds" << endl;
}