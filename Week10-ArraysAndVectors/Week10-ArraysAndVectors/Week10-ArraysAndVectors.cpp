
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int sumOfVector(vector<int> numbers) {
    int sum = 0;

    // read-only loop
    for (int number : numbers) {
        sum += number;
    }

    /*for (int index = 0; index < numbers.size(); index++) {
        sum += numbers[index];
    }*/

    return sum;
}

int sumOfArray(int numbers[], int size) {
    
    int sum = 0;
    for (int index = 0; index < size; index++ ) {
        sum += numbers[index];
    }

    return sum;
}

int main()
{
    vector<string> names;
    vector<int> jerseyNumbers;

    string input;
    cout << "Enter a player name or QUIT to stop" << endl;
    getline(cin, input);

    int jerseyNumber;

    while (input != "QUIT") {
        names.push_back(input);
        cout << "Enter the jersey number for " << input << endl;
        cin >> jerseyNumber;
        jerseyNumbers.push_back(jerseyNumber);

        cout << "Enter a player name or QUIT to stop" << endl;
        getline(cin, input);
        getline(cin, input);
    }

    cout << "Enter a jersey number to lookup" << endl;
    cin >> jerseyNumber;

    bool match = false;
    for (int index = 0; index < jerseyNumbers.size(); index++) {
        if (jerseyNumbers.at(index) == jerseyNumber) {
            cout << "That number belongs to " << names.at(index) << endl;
            match = true;
        }
    }
    if (!match) {
        cout << "Couldn't find that jersey number" << endl;
    }


    int numbers[5];

    // first position is index 0
    numbers[0] = 1;
    numbers[1] = 2;
    numbers[2] = 3;
    numbers[3] = 4;
    numbers[4] = 5;

    cout << sumOfArray(numbers, 5) << endl;

    cout << numbers[2] * 2 << endl;

    // nothing was ever written here, it's not part of the array
    cout << numbers[5] << endl;

    // won't compile
    //numbers[5] = 20;

    const int size = 3;
    cout << "enter the number of numbers you want to store" << endl;
   // cin >> size;
    int usersNumbers[size] = { 20, 30, 40 };

    // initializer to make this faster than going by index
    vector<int> betterNumbers = { 1,2,3,4,5 };

    // sets up vector with spaces for 5 values
    vector<int> presizedNumbers(5);

    presizedNumbers[0] = 42;
    presizedNumbers.at(1) = 77;
    presizedNumbers[2] = 100;
    presizedNumbers.at(3) = 0;
    presizedNumbers[4] = 6;

    presizedNumbers.push_back(7);

    cout << "The sum of all those values is " << sumOfVector(presizedNumbers) << endl;
    

    // crashes the program getting an invalid index
    //cout << presizedNumbers.at(5) << endl;
    cout << presizedNumbers[5] << endl;




}
