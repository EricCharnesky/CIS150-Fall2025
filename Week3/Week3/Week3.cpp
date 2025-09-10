

#include <iostream>

using namespace std;

int main()
{
    int denominator;
    cout << "Enter a demoninator" << endl;
    cin >> denominator;

    double result = 1.0 / denominator;

    if ( fabs(result - .333333333) < .00000001 ) {
        cout << "You entered 3" << endl;
    }
    else {
        cout << "you didn't enter 3" << endl;
    }



    string message;
    cout << "Enter a message to encrypt" << endl;
    cin >> message;

    // feels bad, needs loops
    if (message.find("e") == string::npos) {
        message.replace(message.find("e"), 1, "z");
    }
    if (message.find("e") == string::npos) {
        message.replace(message.find("e"), 1, "z");
    }
    if (message.find("e") == string::npos) {
        message.replace(message.find("e"), 1, "z");
    }
    
    message.replace(message.find("a"), 1, "b");

    cout << message;

    string emailAddress;
    cout << "Enter your email address" << endl;
    cin >> emailAddress;

    if (emailAddress.find("@") == string::npos) {
        cout << "invalid email addresss" << endl;
    }
    else {
        int indexOfAt = emailAddress.find("@");
        cout << "user part of the email is: " << emailAddress.substr(0, indexOfAt) << endl;
        cout << "domain part of the email is " << emailAddress.substr(indexOfAt + 1) << endl;
    }


    const int TARIFF_ORDER_MINIMUM = 800;
    const double TARIFF_RATE_INDIA = 1;
    const double TARIFF_RATE_BRAZIL = .5;
    double orderCost;
    cout << "Enter the cost of your international order so we can caluclate tariffs" << endl;
    cin >> orderCost;

    double tariffCost;
    double tariffRate = 0;

    string countryOfOrigin;
    cout << "What country did this order come from" << endl;
    cin >> countryOfOrigin;

    if (orderCost < TARIFF_ORDER_MINIMUM) {
        tariffRate = 0;
    }
    else if (countryOfOrigin == "USA") {
        tariffRate = 0;
    }
    else if (countryOfOrigin == "India")
    {
        tariffRate = TARIFF_RATE_INDIA;
    }
    else if (countryOfOrigin == "Brazil") {
        tariffRate = TARIFF_RATE_BRAZIL;
    }

    tariffCost = orderCost < 800 ? 0 : orderCost * tariffRate;

    if (orderCost < 800) {
        tariffCost = 0;
    }
    else {
        tariffCost = orderCost * tariffRate;
    }

    cout << "Your tariff cost is: $" << tariffCost << endl;



    double percentage;
    cout << "Enter your grade percentage ( 1-100 ) " << endl;
    cin >> percentage;

    // we can do better next chapter
    if (percentage < 1 || percentage > 100) {
        cout << "Invalid percentage, please enter 1-100" << endl;
        cin >> percentage;
    }

    if (percentage >= 94) {
        cout << "You have an A" << endl;
    }
    // we know it can't be more than 94
    // same as
    //if ( percentage < 94 && percentage >= 90 )
    else if (percentage >= 90) {
        cout << "A-" << endl;
    }
    else if (percentage >= 87) {
        cout << "B+" << endl;
    }
    else if (percentage >= 84) {
        cout << "B" << endl;
    }
    else if (percentage >= 80) {
        cout << "B-" << endl;
    }
    else if (percentage >= 77) {
        cout << "C+" << endl;
    }
    else if (percentage >= 74) {
        cout << "C" << endl;
    }
    else if (percentage >= 70) {
        cout << "C-" << endl;
    }
    else if (percentage >= 67) {
        cout << "D-" << endl;
    }
    else if (percentage >= 64) {
        cout << "D" << endl;
    }
    else {
        cout << "F" << endl;
    }

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
