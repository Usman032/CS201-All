#include <iostream>
#include <string>
#include <string.h>
#include <cctype>
#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;

int main ()
{
    char str1[] = "0123456789abcdefghiljkmnop";
    char str2[150] = "";
    char str3[10];

// str2 before copy from str1...
    cout<<"// str2 before copy from str1..."<<endl;
    for (char i : str2) {
        cout << i << " ";
    }
    cout<<endl;

    for (int i = 0; i <= strlen(str1) + 1 ; i++) {
        str2[i] = str1[i];
    }

    // str2 after copy from str1...
    cout<<"// str2 after copy from str1..."<<endl;
    for (int i = 0; i < strlen(str2) ; i++) {
        putchar(toupper(str2[i]));
    }


    return 0;
}