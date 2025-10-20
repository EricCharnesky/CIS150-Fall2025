
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int stepsTo1In3XPlus1(int value) {
	int steps = 0;

	while (value != 1) {
		if (value % 2 == 1) {
			value *= 3;
			value++;
		}
		else {
			value /= 2;
		}
		steps++;
	}

	return steps;
}

int countOfLetterInFile(char letter, string fileName) {
	ifstream inputFileStream;

	inputFileStream.open(fileName);

	int countOfLetter = 0;

	if (inputFileStream.is_open()) {
		while (!inputFileStream.eof()) {
			string line;
			getline(inputFileStream, line);

			for (char character : line) {
				if (character == letter) {
					countOfLetter++;
				}
			}
		}
	}
	return countOfLetter;
}

int main()
{

	for (int number = 1; number < 100000; number++) {
		cout << "Number of steps to get to 1 from " << number << 
			": " << stepsTo1In3XPlus1(number) << endl;
	}
	
	int numberOfValuesGreaterThan80 = 0;
	for (int numbers = 0; numbers < 10; numbers++) {
		int number;
		cout << "Enter a number between 0-100" << endl;
		cin >> number;

		while (number < 0 || number > 100) {
			cout << "invalid" << endl;
			cout << "Enter a number between 0-100" << endl;
			cin >> number;
		}

		if (number > 80) {
			numberOfValuesGreaterThan80++;
		}

		cout << "You entered " << numberOfValuesGreaterThan80 
			<< " numbers greater than 80" << endl;

   }
}
