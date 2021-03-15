#include <iostream>
#include <cstring>
#include <bits/stdc++.h>
using namespace std;
int main() {
    ifstream namesFromFile;
    int index = 0;
    namesFromFile.open("names.txt");
    const char *suite[] = {"Hearts", "Diamonds", "Clubs", "Spades" };
    const char *face[] = { "Ace", "Deuce", "Three", "Four", "Five", "Six", "Seven",
                               "Eight", "Nine", "Ten", "Jack", "Queen", "King"};
    cout <<suite[3] << " " << &face[2] <<face[4] << endl;

    return 0;
}