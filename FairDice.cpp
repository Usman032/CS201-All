#include <iostream>
#include <cstdlib>
#include <random>
#include <ctime>

using namespace std;
unsigned short rollTheDice();
int main(){
    string arrayPlayers[] = {"Zainab", "Mehroosh", "Abeer", "Mishaal" };
    unsigned short scoreZainab = 0, scoreMuhammad = 0, scoreSaira = 0, scoreUsman = 0;
    short gameLength = 1, playerTurn;
    char dummy;


    for ( gameLength = 1; gameLength <= 4; gameLength++)
    {
        for (playerTurn = 0; playerTurn <= 3 ; playerTurn++)
        {
            if (playerTurn == 0) {
                cout <<"\n" << arrayPlayers[playerTurn] << "'s turn, press Z" << endl;
                cin >> dummy;
                cout << arrayPlayers[playerTurn] << "'s Score = " << (scoreZainab += rollTheDice()) << endl;
            } else if (playerTurn == 1) {
                cout <<"\n" <<  arrayPlayers[playerTurn] << "'s turn, press M" << endl;
                cin >> dummy;
                cout << arrayPlayers[playerTurn] << "'s Score = " << (scoreMuhammad += rollTheDice()) << endl;
            } else if (playerTurn == 2) {
            cout <<"\n" <<  arrayPlayers[playerTurn] << "'s turn, press A" << endl;
                cin >> dummy;
                cout << arrayPlayers[playerTurn] << "'s Score = " << (scoreSaira += rollTheDice()) << endl;
            } else if (playerTurn == 3) {
            cout <<"\n" <<  arrayPlayers[playerTurn] << "'s turn, press N"<< endl;
                cin >> dummy;
                cout << arrayPlayers[playerTurn] << "'s Score = " << (scoreUsman += rollTheDice()) << endl;
            }
        }
    }
    cout << "\n+++++++++++++++++++++++++++++++++++++" <<endl;
    cout << "Score of " << arrayPlayers[0] << " is " << scoreZainab <<endl;
    cout << "Score of " << arrayPlayers[1] << " is " << scoreMuhammad <<endl;
    cout << "Score of " << arrayPlayers[2] << " is " << scoreSaira <<endl;
    cout << "Score of " << arrayPlayers[3] << " is " << scoreUsman <<endl;
    cout << "+++++++++++++++++++++++++++++++++++++" << "\n\n" <<endl;
    system("pause");
    return 0;
}
unsigned short rollTheDice()
{
    unsigned short randomNumber;
    // Get the system time.
    unsigned seed = time(0);
    // Seed the random number generator.
    srand(seed);
    randomNumber = rand() % 7;
    while (randomNumber < 1)
    {
        randomNumber = rand() % 7;
    }
        if(randomNumber <= 0)
        {
            cout << randomNumber << " is less than 1" << endl;
        } else{
            return randomNumber;
        }
    return randomNumber;
}

