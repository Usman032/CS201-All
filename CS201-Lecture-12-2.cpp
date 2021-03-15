#include <iostream>
#include <cstring>
#include<conio.h>
void reverse(int [], int);
using namespace std;
int main() {
    int arr[2][3];
    cout<<"enter arr elem " << endl;
    for (int i = 0; i <2; ++i) {
        for (int j = 0; j < 3; ++j) {
            cin>>arr[i][j];
        }
        cout<<endl;
    }

    for (auto & i : arr) {
        for (int j = 0; j < 3; ++j) {
            cout<< i[j] << "  ";
        }
        cout<<endl;
    }
    return 0;
}









void reverse(int arr[5], int)
{
    int num = arr[5] * 100;
        cout << num;
}