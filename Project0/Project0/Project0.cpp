
#include <iostream>

using namespace std;

int main()
{
    cout << "How many guests are coming to the party?" << endl;
    int numberOfGuests;
    cin >> numberOfGuests;
    numberOfGuests++;

    string choice = "";

    while (choice != "cake" && choice != "pizza" && choice != "pop") {
        cout << "Are you serving cake, pizza, or pop?" << endl;
        cin >> choice;
    }

    double amountOfWholeItemPerPerson;

    if (choice == "cake") {
        amountOfWholeItemPerPerson = .25;
    }
    else if (choice == "pizza") {
        amountOfWholeItemPerPerson = .3333333333;
    }
    else {
        amountOfWholeItemPerPerson = .375;
    }

    cout << "How much does it cost to buy 1 " << choice << "?" << endl;
    double pricePerItem;
    cin >> pricePerItem;

    // found how to round up at https://stackoverflow.com/questions/39925020/rounding-up-and-down-a-number-c
    // from bing ai "how to round up in c++"
    double numberOfItemsNeeded = ceil( numberOfGuests * amountOfWholeItemPerPerson );
    //numberOfItemsNeeded = ceil(numberOfItemsNeeded);

    cout << "To serve " << numberOfItemsNeeded << " " << choice << " to " << numberOfGuests << " people " <<
        " at your lame party will cost about $" << pricePerItem * numberOfItemsNeeded << endl;

    return 0;
}