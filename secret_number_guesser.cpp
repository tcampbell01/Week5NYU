#include <iostream>
#include <time.h>
using namespace std;

int main()
{

    int secretNumber;
    srand(time(NULL));              // Initialize random seed
    secretNumber = rand() % 20 + 1; // Generate secret number between 1 and 20.

    int myGuess = 0;

    while (secretNumber != myGuess)
    {

        cout << "Please enter a guess:";
        cin >> myGuess;

        if (myGuess < secretNumber)
        {
            cout << "Secret number is higher than guessed number" << endl;
        }
        else if (myGuess > secretNumber)
        {
            cout << "Secret number is lower than guessed number" << endl;
        }
        else
        {
            cout << "Congratulations!!" << endl;
        }
    }

    return 0;
}