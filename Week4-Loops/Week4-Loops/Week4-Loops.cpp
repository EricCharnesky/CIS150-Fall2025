
#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    srand(time(0));
    char playAgain = 'y';

    while (playAgain == 'y') {

        // bing "c++ srand time"
        
        int luckyNumber = rand() % 10 + 1;

        cout << "Guess a number 1 - 10: " << endl;

        int guess;
        cin >> guess;

        // runs if the condition is true
        while (guess != luckyNumber) {
            if (guess < luckyNumber) {
                cout << "too low!" << endl;
            }
            else {
                cout << "too high!" << endl;
            }
            cout << "Guess again: " << endl;
            cin >> guess;
        } // go back and check the condition


        cout << "You guessed it!" << endl;

        cout << "Do you want to play again? (y/n)" << endl;
        cin >> playAgain;
    }
}
