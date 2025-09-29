

#include <iostream>
#include <ctime>
#include <cassert>

using namespace std;

// ax^2 + bx + c = 0
string findIntercepts(double a, double b, double c, double& intercept1, double& intercept2) {
    double determinant = pow(b, 2) - 4 * a * c;
    if (determinant < 0) {
        return "No intercepts found";
    }
    intercept1 = (-b + sqrt(determinant)) / (2 * a);
    intercept2 = (-b - sqrt(determinant)) / (2 * a);

    return "intercepts set";
}

// to pass by reference, we use the &
void printTriangle(int& size, char character) {
    size += 10;
    for (int row = 1; row <= size; row++) {
        for (int column = 1; column <= row; column++) {
            cout << character;
        }
        cout << endl;
    }
}

int someRandomNumber(int maxNumber) {
    return rand() % maxNumber + 1;
}

int someNumber() {
    return 10;
}

char getCharacterFromUserFromValidString(string prompt, string validCharacters) {
   
    bool isInputInValidCharacters = false;
    char input;

    while (!isInputInValidCharacters) {
        cout << prompt << endl;
        
        cin >> input;

        for (char character : validCharacters) {
            if (character == input) {
                isInputInValidCharacters = true;
                break;
            }
        }
    }

    return input;

}

int getUserInputWithinRange(int lowerBound, int upperBound) {
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

int main()
{
    char playAgain = getCharacterFromUserFromValidString("Do you want to play again? (y/n)", "yn");

    double a1 = 2;
    double b1 = 3;
    double c1 = -2;
    double testIntercept1;
    double testIntercept2;
    findIntercepts(a1, b1, c1, testIntercept1, testIntercept2);
    assert(testIntercept1 == .5);
    assert(testIntercept2 == -2);



    srand(time(0));

    cout << "Hello World!" << endl;
    cout << "3.5 rounded up is " << ceil(3.5) << endl;
    cout << "Some number is : " << someNumber() << endl;
    cout << "Some random number is: " << someRandomNumber(100) << endl;

    cout << "How large of a triangle?" << endl;
    int size = getUserInputWithinRange(1, 100);

    cout << "What character should we use? " << endl;
    char character;
    cin >> character;

    printTriangle(size, character);

    cout << size << endl;

    double a, b, c;
    double intercept1;
    double intercept2;

    cout << "Enter a, b, and c for ax^2 + bx + c = 0";
    cin >> a >> b >> c;

    cout << findIntercepts(a, b, c, intercept1, intercept2) << endl;
    
    cout << "Intercept 1: " << intercept1 << endl;
    cout << "Intercept 2: " << intercept2 << endl;

}
