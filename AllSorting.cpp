//  https://www.youtube.com/watch?v=jpK5TwdIfSs&list=PLsFNQxKNzefK_DAUwnQwBizOmcY7aDLoY
#include <iostream>
#include <conio.h>
# define ARRAY_SIZE 5
using namespace std;

int bubbleSort(int [], int);
int functionSearchArray(int [], int, int);

int main() {
    int find = 88;
    int arrOne[] = {4,5,6,8,2,87,1,3,78,15,46,65,100};
    int arrOneSize = sizeof(arrOne)/sizeof(arrOne[0]);
    for (int i = 0; i < sizeof(arrOne)/sizeof(arrOne[0]); i++) {
        cout << arrOne[i] << "\t";
    }
    cout<<"\n==================================================================================================="<<endl;
//  calling sorting function
    bubbleSort(arrOne, sizeof(arrOne)/sizeof(arrOne[0]));
//  calling searching function
    functionSearchArray(arrOne, arrOneSize, find);
    return 0;
}
int bubbleSort(int array[], int sizeOf)
{
    int round, i, temp;
    for (round = 1; round <sizeOf-1 ; round++) {
        for (i = 0; i <sizeOf - 1 - round ; ++i) {
            if(array[i] > array[i+1]){
                temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
            }

        }

    }
    for (int i = 0; i < 13; i++) {
        cout<<array[i]<<"\t";
    }
    cout<<endl;
    return 0;
}
//  https://www.cpp.thiyagaraaj.com/c-programs/c-array-example-programs/simple-searching-in-array-c-example-program
//  https://onlinegdb.com/Byyc53IsP

// to do --> make this function like the other ones in this project. (i mean add arguments..)
int functionSearchArray(int arraySearch[], int size, int search_key)
{
    int i;
    for ( i = 0; i < size; i++)
    {
        if(arraySearch[i] == search_key)
        {
            cout<<"Search Element "<<search_key<<" Found . Index Is : "<< arraySearch[i] <<" \n";
            break;
        }
    }
    if(arraySearch[i] != search_key) {
        cout<<"Search Element is not in Array.\n";
    }

}
