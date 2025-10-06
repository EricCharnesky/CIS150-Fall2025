
#include <iostream>
#include <string>
#include "Functions.h"

using namespace std;

// this is bad form
int myNumber;


void addToNumber() {
	myNumber += 10;
	
}

int main()
{

    cout << "today " << getDate(6) << endl;
    cout << "final presentations " << getDate(12, 15) << endl;
    cout << "graduation " << getDate(1, 5, 2029) << endl;
	myNumber = 10;



    int userNumber = getUserInputWithinRange(10);

	cout << "myNumber before " << myNumber << endl;

	addToNumber();

	cout << "myNumber after " << myNumber << endl;
}
