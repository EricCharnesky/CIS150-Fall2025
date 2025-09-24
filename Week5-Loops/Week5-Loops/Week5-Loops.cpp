
#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    int countOfOnes = 0;
    int countOfTwos = 0;
    int countOfThrees = 0;
    int countOfFours = 0;
    int countOfFives = 0;
    int countOfSixes = 0;

    int numberOfRolls;
    cout << "How many times do you want to roll?" << endl;
    cin >> numberOfRolls;

    srand(time(0));

    for (int roll = 0; roll < numberOfRolls; roll++) {
        int randomValue = rand() % 6 + 1;
        if (randomValue == 1) {
            countOfOnes++;
        }
        else if (randomValue == 2) {
            countOfTwos++;
        }
        else if (randomValue == 3) {
            countOfThrees++;
        }
        else if (randomValue == 4) {
            countOfFours++;
        }
        else if (randomValue == 5) {
            countOfFives++;
        }
        else if (randomValue == 6) {
            countOfSixes++;
        }
    }

    cout << "Count of ones: " << countOfOnes << endl;
    cout << "Count of two: " << countOfTwos << endl;
    cout << "Count of threes: " << countOfThrees << endl;
    cout << "Count of fours: " << countOfFours << endl;
    cout << "Count of fives: " << countOfFives << endl;
    cout << "Count of sixes: " << countOfSixes << endl;


    string pause;
    cin >> pause;


    const int GREEN = 0;
    const int YELLOW = 1;
    const int RED = 2;

    int currentLightColor = GREEN;


    // https://learn.zybooks.com/zybook/UMDEARBORNCIS150CharneskyFall2025/chapter/4/section/11?content_resource_id=115229782
    enum LightState { LS_RED, LS_GREEN, LS_YELLOW, LS_DONE };

    LightState currentLightState = LS_RED;

    while (currentLightState == LS_RED) {
        cout << "wait at the red light" << endl;
        for (int i = 0; i < 1000000000; i++) {
            currentLightState = LS_GREEN;
        }
    }
    cout << "Green means gooooooo!" << endl;

    int number = 1;
    while (true) {
        
        if (number % 100000000 == 0) {
            cout << number << endl;
        }

        if (number == INT_MAX) {
            // breaks the loop - stops it completely
            break;
        }

        number++;
       
    }

    cout << number << endl;

    int i = 0;
    for (int i = 0; i < 100; i++) {
        if (i % 2 == 0) {
            // jump back to the loop header
            continue;
        }
        cout << i << endl;
    }

    // will still be 0
    cout << i << endl;


    cout << "The loop is done!" << endl;
}
