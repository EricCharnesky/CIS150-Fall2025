#pragma once

#include <string>
#include <iostream>

using namespace std;

// bing ai answer - "c++ int to string"
string getDate(int day, int month = 10, int year = 2025) {
    int daysInMonth = 30;
    if (month == 1 || month == 3 || month == 5
        || month == 7 || month == 8 || month == 10 || month == 12) {
        daysInMonth = 31;
    }
    else if (month == 2) {
        daysInMonth = 28;
    }

    if (day < 1 || day > daysInMonth) {
        cout << "invalid day" << endl;
        day = 1;
    }

    return to_string(year) + "-" + to_string(month) + "-" + to_string(day);
}

// overloading with different types
string getDate(string day, string month = "10", string year = "2025") {
    return year + "-" + month + "-" + day;
}

//                                      defaults to 1 if not provided
int getUserInputWithinRange(int upperBound, int lowerBound = 1) {
    cout << "Enter a value between " << lowerBound << " - " << upperBound << endl;
    int value;
    cin >> value;

    while (value < lowerBound || value > upperBound) {
        cout << "invalid, please try again dummy" << endl;
        cout << "Enter a value between " << lowerBound << " - " << upperBound << endl;
        cin >> value;
    }

    return value;
}