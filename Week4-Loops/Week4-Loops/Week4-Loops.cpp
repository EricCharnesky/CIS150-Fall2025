
#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    // bing "c++ srand time"
    srand(time(0));
    int luckyNumber = rand() % 100 + 1;

    cout << "Guess a number 1 - 100: " << endl;

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



}
