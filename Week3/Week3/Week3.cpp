

#include <iostream>

using namespace std;

int main()
{
    cout << "Hello World!" << endl;
    cout << "How much money do you have in your pocket?" << endl;

    double moneyInMyPocket;
    cin >> moneyInMyPocket;

    if (moneyInMyPocket > 15) {
        cout << "You can get a combo at Picasso" << endl;
    }
    // this can never run, the first if will run instead
    else if (moneyInMyPocket > 20) {
        cout << "You're buying lunch for your friend as well" << endl;
    }
    else if (moneyInMyPocket > 10) {
        cout << "You can get lunch at Picasso" << endl;
        cout << "More lines of code" << endl;
    }
    else {
        cout << "You get ramen noodles" << endl;
    }

    cout << "Do you want a pop? ( y/n )" << endl;
    // string input
    char input;
    cin >> input;

    // y or Y - can use strings in if statements
    //if (input == "y" || input == "Y" )
    if (input == 'y' || input == 'Y')
    {

    }

    // switches don't work with strings, must be char only
    switch (input) {
    case 'y':
    case 'Y':
        cout << "Enter a choice" << endl;
        cout << "1 - Coke" << endl;
        cout << "2 - Coke Zero" << endl;
        cout << "3 - Mountain Dew" << endl;
        cout << "4 - Sprite" << endl;

        int choice;
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "You got a coke with your lunch" << endl;
            break; // please stop the switch
        case 2:
            cout << "You got a coke zero with your lunch" << endl;
            break;
        case 3:
            cout << "Do the dew!" << endl;
            break;
        case 4:
            cout << "Sprite for you" << endl;
            break;
        default:
            cout << "Invalid choice, no pop for you" << endl;
            // no break needed, it's already done
        }

        if (choice == 1) {
            cout << "Coke" << endl;
        }
        else if (choice == 2) {
            cout << "Coke zero" << endl;
        }
        else if (choice == 3) {
            cout << "Do the dew!" << endl;
        }
        else if (choice == 4) {
            cout << "sprite" << endl;
        }
        else {
            cout << "invalid" << endl;
        }

        break;
    }

    int assignment1Score, assignment2Score;
    int assignment3Score;
    int assignment4Score;

    bool amHungry = true;

    // if ( amHungry == true ) - redundant
    if (amHungry) {
        cout << "Go eat!" << endl;
    }

    if (amHungry != false) {

    }
    
    bool notHungry = false;

    // ( notHungry == false )
    if (!notHungry) {
        cout << "go eat!" << endl;
    }

    // arithmetic happens first, then relational
    if (10 + 4 > 15) {


    }


    if (10 + 4 > 15 && 5 < 20 || 20 > 7) {
        cout << "yes" << endl;
    }

    // true && true == true
    // true && false == false
    // false && true == false
    // false && false == false

    // true || true == true
    // true || false == true
    // false || true == ture
    // false || false == false



    return 0;
}
