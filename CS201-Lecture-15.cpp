// https://youtu.be/SE72haSvONM?t=1840
#include<iostream>
#include <conio.h>
using namespace std;
void StringCopy(char string1[], char string2[], char *destination, char const *source);

int main()
{
    char string1[20] = "Aamir";
    char string2[20];
    char const *ptrA;
    char *ptrB;
    ptrA =  string1;
    ptrB = string2;
    int i = 0;
    StringCopy(&string1[20],  &string2[20], ptrB, ptrA);


    // int  que[10], *ptr1, *ptr2 ,*ptr3, *ptr4;
    // int y[10] = {1000,21,42,53,4,51,6,7,8,9};
    // ptr1 = y;
    // int number = 10, *ptr;
    // ptr = &number;
    // cout<<"\tptr1       --> "<< ptr1<<endl;
    // cout<<"\t   y       --> "<< y<<endl;
    // cout<<"\ty[5]       --> "<<y[5]<<endl;
    // cout<<"\t(ptr1 + 5) --> "<< (ptr1 + 5)<<endl;
    // cout<<"\t(*ptr1 + 5)--> "<< (*ptr1 + 5)<<endl;
    // cout<<"\t*(ptr1 + 5)--> "<< *(ptr1 + 5)<<endl;
    // cout<<"\t(*ptr1 + 5)--> "<< (*ptr1 + 5)<<endl;
    return 0;
}
void StringCopy(char string1[], char string2[], char *destination, char const *source)
{
    while(*source != '\0')
    {
        *destination++ = *source++;
    }
    *destination = '\0';
    for(int i =0; i<20; i++)
    {
        if(string2[i] == '\0')
        {
            cout<<string1[i];
            break;
        }
        cout<<string2[i];
    }
}