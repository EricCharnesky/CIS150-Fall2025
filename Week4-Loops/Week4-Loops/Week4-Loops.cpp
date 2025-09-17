
#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    // bing "c++ srand time"
    srand(time(0));

    int rows;
    cout << "How many rows do you want?" << endl;
    cin >> rows;

    int columns;
    cout << "How many columns do you want?" << endl;
    cin >> columns;

    for (int row = 1; row <= rows; row++) {
        for (int column = 1; column <= columns; column++) {
            cout << "*";
        }
        cout << endl;
    }
    cout << endl << endl;

    int height;
    cout << "Enter the height of a triangle" << endl;
    cin >> height;

    for (int row = 1; row <= height; row++) {
        for (int column = 1; column <= row; column++) {
            cout << "*";
        }
        cout << endl;
    }

    cout << endl << endl;

    int base;
    cout << "How many stars in your base" << endl;
    cin >> base;

    while (base % 2 == 0) {
        cout << "Must be odd ( like Eric )" << endl;
        cout << "How many stars in your base" << endl;
        cin >> base;
    }

    rows = base / 2 + 1;
    int spaces = rows - 1;
    int stars = 1;

    for (int row = 1; row <= rows; row++) {
        for (int space = 1; space <= spaces; space++) {
            cout << " ";
        }
        for (int star = 1; star <= stars; star++) {
            cout << "*";
        }
        cout << endl;
        spaces--;
        stars += 2;
        // stars = stars + 2;
    }

    cout << endl << endl;

    // row 1 - spaces 4 - 1 stars
    // row 2 - spaces 3 - 3 stars
    // row 3 - spaces 2 - 5 stars
    // row 4 - spaces 1 - 7 stars
    // row 5 - spaces 0 - 9 stars

    cout << "Let's print 0-9 with a for loop" << endl;
    //                       while
    // initialize a value, test a value, increment a value
    for (int number = 0; number < 10; number++) {
        cout << number << endl;
    }

    cout << "Let's print 0-9 with a while loop" << endl;
    int number = 0;
    while (number < 10) {
        cout << number << endl;
        number++;
    }

    cout << "Let's print 0-9 with a do loop" << endl;
    int doNumber = 0;
    do {
        cout << doNumber << endl;
        doNumber++;
    } while (doNumber < 10);



    char more;

    // post test loop - runs AT LEAST once
    do {
        cout << "Do you want more? (y/n)" << endl;
        cin >> more;
    } while (more != 'y' && more != 'n');



    
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

        // validation loop for characters are not a valid option
        while (playAgain != 'y' && playAgain != 'n') {
            cout << "Enter only y or n" << endl;
            cout << "Do you want to play again ? (y / n)" << endl;
            cin >> playAgain;
        }
    }
}
