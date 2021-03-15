// print arrOfFives[] and arrOfSixes[] to confirm if they have 5s and 6s
// try ootput to file.

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    long long arrDice[100];
    long long arrOfOnes[100];
    long long arrOfTows[100];
    long long arrOfThrees[100];
    long long arrOfFours[100];
    long long arrOfFives[100];
    long long arrOfSixes[100];
    int loopCount = 0;
    int randomNumber = 0;
    int numberOfOnes = 0, numberOfTwos = 0, numberOfThrees = 0, numberOfFours = 0, numberOfFives = 0, numberOfSixes = 0;
    // Get the system time.
    unsigned seed = time(0);
    // Seed the random number generator.
    srand(seed);
    // Add random 1s, 2s, 3s, 4s, 5s and 6s to arrDice.
    for(int i = 0; i < sizeof(arrDice)/sizeof(arrDice[0]); i++)
    {
        randomNumber = rand() % 7;
        if(randomNumber >= 1)
        {
            arrDice[i] = randomNumber;
            cout<<"arrDice[i] = "<< arrDice[i] <<" randomNumber = "<<randomNumber<<endl;
        }
        loopCount++;
        // cout<<" "<< arrDice[i] <<endl;
    }
    cout<<"Number of random numbers in arrDice[] = "<<loopCount<<endl;
    // loopCount = 0;
    cout<<"size of array arrDice is = "<<sizeof(arrDice)/sizeof(arrDice[0])<<endl;
    cout<<"And loopCount is = "<<loopCount<<endl;

    for(int i = 0; i<sizeof(arrDice)/sizeof(arrDice[0]); i++) {
        if (arrDice[i] % 1 == 0 && arrDice[i] / 1 == 1) {
            arrOfOnes[i] = arrDice[i];
            numberOfOnes ++;
            cout<<"arrOfOnes[] at "<<i<<" = "<<arrOfOnes[i]<<endl;
        }
        else if (arrDice[i] % 2 == 0 && arrDice[i] / 2 == 1) {
            arrOfTows[i] = arrDice[i];
            cout<<"arrOfTows[] at "<<i<<" = "<<arrOfTows[i]<<endl;
            numberOfTwos++;
        }
        else if (arrDice[i] % 3 == 0 && arrDice[i] / 3 == 1) {
            arrOfThrees[i] = arrDice[i];
            cout<<"arrOfThrees[] at "<<i<<" = "<<arrOfThrees[i]<<endl;
            numberOfThrees++;

        }
        else if (arrDice[i] % 4 == 0 && arrDice[i] / 4 == 1) {
            arrOfFours[i] = arrDice[i];
            cout<<"arrOfFours[] at "<<i<<" = "<<arrOfFours[i]<<endl;
            numberOfFours++;

        }
        else if (arrDice[i] % 5 == 0 && arrDice[i] / 5 == 1) {
            arrOfFives[i] = arrDice[i];
            cout<<"arrOfFives[] at "<<i<<" = "<<arrOfFives[i]<<endl;
            numberOfFives++;

        }
        else if (arrDice[i] % 6 == 0 && arrDice[i] / 6 == 1) {
            arrOfSixes[i] = arrDice[i];
            cout<<"arrOfSixes[] at "<<i<<" = "<<arrOfSixes[i]<<endl;
            numberOfSixes++;
        }

    }
    cout << "The number of " <<arrOfOnes[1] << " 1s in arrOfOnes[] is  = " << numberOfOnes << endl;
    cout << "The number of "<<arrOfTows[1] << " 2s in arrOfTwos[] is  = " << numberOfTwos << endl;
    cout << "The number of "<<arrOfThrees[1] << " 3s in arrOfThrees[] is= " << numberOfThrees << endl;
    cout << "The number of "<<arrOfFours[1] << " 4s in arrOfFours[] is = " << numberOfFours << endl;
    cout << "The number of "<<arrOfFives[1] << " 5s in arrOfFives[] is = " << numberOfFives << endl;
    cout << "The number of  "<<arrOfSixes[1] << " 6s in arrOfSixes[] is = " << numberOfSixes << endl;
    cout << "Total random numbers in all arrays is = "<<numberOfOnes + numberOfTwos + numberOfThrees + numberOfFours + numberOfFives + numberOfSixes<<endl;

    return 0;
}
