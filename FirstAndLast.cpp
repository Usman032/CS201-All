#include <iostream>
using namespace std;

int main() {
    int runThisMuchTimes;
    cout << "How many times do you want to find the sum of first and last numbers\n";
    cin>>runThisMuchTimes;
    while(runThisMuchTimes--)
    {
        int n[1000];
        int num;
        cout << "Enter the number to find sum of first and last digit\n";
        cin>>num;
        int num2 = num;
        int i=0;
        while(num)
        {
            int rem=num%10;
            n[i]=rem;
            num=num/10;i++;
        }
        cout << "The sum of first and last digits of " << num2 << " is:\n";
        cout<<n[0]+n[i-1]<<endl;
    }
    return 0;
}