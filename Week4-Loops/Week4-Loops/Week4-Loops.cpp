
#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    // bing "c++ srand time"
    srand(time(0));
    char playAgain = 'y';

    while (playAgain == 'y') {

        cout << "How high of a number do you want to guess?" << endl;
        int maxNumber;
        cin >> maxNumber;

        // invalid range check for validate loop
        while (maxNumber <= 0 || maxNumber > 1000000) {
            cout << "Must be greater than 0 and less than 1,000,000" << endl;
            cout << "How high of a number do you want to guess?" << endl;
            cin >> maxNumber;
        }

        
        int luckyNumber = rand() % maxNumber + 1;

        cout << "Guess a number 1 - " << maxNumber << ":" << endl;

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

        while (playAgain != 'y' && playAgain != 'n') {
            cout << "Enter only y or n" << endl;
            cout << "Do you want to play again ? (y / n)" << endl;
            cin >> playAgain;
        }
    }
}
