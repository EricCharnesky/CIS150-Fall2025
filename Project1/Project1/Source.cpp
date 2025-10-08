#include <iostream>
#include <ctime>

using namespace std;

const int X_TILT_POSITIVE = 1;
const int X_TILT_NEGATIVE = 2;
const int Y_TILT_POSITIVE = 3;
const int Y_TILT_NEGATIVE = 4;
const int THRUSTERS = 5;
const int NOTHING = 6;
const int SELF_DESTRUCT = 7;
const int SELF_DESTRUCT_CANCEL_CODE = 1234;

void printDetails(int xTilt, int yTilt, int distance) {
	cout << "Your x tilt is " << xTilt << endl;
	cout << "Your y tilt is " << yTilt << endl;
	cout << "Distance from surface is " << distance << endl;
}

void printLandedOrCrashed(int xTilt, int yTilt) {
	if (xTilt == 0 && yTilt == 0) {
		cout << "You landed successfully!" << endl;
	}
	else {
		cout << "You crashed, there goes a billion dollars!" << endl;
	}
}

int getRandomNumberNegative10to10() {
	return rand() % 21 - 10;
}

int getChoice() {
	int choice = 0;
	
	while (choice < 1 || choice > 7) {
		cout << "Enter:" << endl;
		cout << X_TILT_POSITIVE << " to increase x tilt" << endl;
		cout << X_TILT_NEGATIVE << " to decrease x tilt" << endl;
		cout << Y_TILT_POSITIVE << " to increase y tilt" << endl;
		cout << Y_TILT_NEGATIVE << " to decrease y tilt" << endl;
		cout << THRUSTERS << " to activate thrusters" << endl;
		cout << NOTHING << " to do nothing" << endl;
		cout << SELF_DESTRUCT << " to activate self destruct" << endl;
		cin >> choice;
	}
	
	return choice;
}

string askToPlayAgain() {
	cout << "Do you want play again? y/n";
	string playAgain;
	cin >> playAgain;

	return playAgain;
}

int main() {

	srand(time(0));

	string playAgain = "y";

	while (playAgain == "y") {

		bool selfDestructActive = false;

		int xAxisTilt = getRandomNumberNegative10to10();
		int yAxisTilt = getRandomNumberNegative10to10();

		int distanceFromSurface = 10;

		while (distanceFromSurface > 0) {
			printDetails(xAxisTilt, yAxisTilt, distanceFromSurface);

			if (selfDestructActive) {
				cout << "Enter cancelation code " << endl;
				int cancelationCode;
				cin >> cancelationCode;

				if (cancelationCode == SELF_DESTRUCT_CANCEL_CODE) {
					cout << "Successfully cancelled self destruct, good job" << endl;
					selfDestructActive = false;
				}
				else {
					cout << "invalid code" << endl;
				}
			}
			else {
				int choice = getChoice();

				if (choice == X_TILT_POSITIVE) {
					xAxisTilt++;
				}
				else if (choice == X_TILT_NEGATIVE) {
					xAxisTilt--;
				}
				else if (choice == Y_TILT_POSITIVE) {
					yAxisTilt++;
				}
				else if (choice == Y_TILT_NEGATIVE) {
					yAxisTilt--;
				}
				else if (choice == THRUSTERS) {
					distanceFromSurface += 2;
				}
				else if (choice == NOTHING) {
					// ?
				}
				else if (choice == 7) {
					selfDestructActive = true;
				}
				
			}

			distanceFromSurface--;
		}

		printLandedOrCrashed(xAxisTilt, yAxisTilt);


		playAgain = askToPlayAgain();
	}


	return 0;
}