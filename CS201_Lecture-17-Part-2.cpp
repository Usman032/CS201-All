#include <iostream>
#include <cmath>
using namespace std;

void convertToBinary(char);
void characterToBinary(char);
int main()
{
    char c;
    int i;
    for (i = 0; i < 256; ++i) {
        c = i;
        cout << i << "\t" << c<<"\t";
//        convertToBinary(i);
        characterToBinary(c);
        cout<<endl;
    }
    return 0;
}

void convertToBinary(char character)
{
    int i;
    int m[8];
    for(i=0;i<8;i++)
    {
        m[i]=character%2;
        character = character/2;
    }
    int top, bottom;

    for(bottom=0,top =7; bottom<8; bottom++,top--)
    {
        m[bottom]=m[top];
        cout<<m[top];
    }
}

void characterToBinary(char character)
{
    int i;
    int s[8];
    for(i=0;i<8;i++) {
        s[i]=character%2;
        character=character/2;
    }
    int a,b;
    for(b=0,a=7;b<8;b++,a--) {
        cout<<s[a];
    }
}