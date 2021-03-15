#include <iostream>
#include <iomanip>
using namespace std;


int main(){
    int arr[5];

//    for(int i =0;i<=sizeof(arr)/sizeof(arr[0]); i++){
    for(int i =0;i<=500; i++){
    arr[i] = i;
    }

//    for(int i =0;i<=sizeof(arr)/sizeof(arr[0]); i++){
    for(int i =0;i<=500; i++){
    cout<<arr[i] <<"\t" <<&arr[i] <<endl;
    }
    return 0;
}
