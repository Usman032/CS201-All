#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

int main() {
    char *iPtr;
    int num1, times;
    num1 = 100000;
    times = 2;
    int count = 1;
    iPtr = (char *) malloc(num1 * sizeof (char ));
    if (iPtr == nullptr)
    {
        cout << "the space cold nt be allcted " <<endl;
        exit(1);
        free(iPtr);
    }
    while (iPtr != nullptr)
    {
        iPtr = (char *) malloc(100000 * times* sizeof (char ));
        times *= 2;
        count ++;
        cout << setw(2) <<count << "   " << setw(6) << times << "   " << setw(15)<<num1 * times * sizeof (char )<< endl;
        free(iPtr);
    }
    cout << iPtr << endl;
    free(iPtr);
    system("pause");
    return 0;
}
