

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    cout << "Hello World!" << endl;
    cout << "Enter your full nane" << endl;
    string fullName;

    getline(cin, fullName);

    cout << "Your full name is " << fullName << endl;

    ifstream inputFileStream;

    inputFileStream.open("test.txt");

    if (!inputFileStream.is_open()) {
        cout << "Could not open file test.txt." << endl;
        return 1; // 1 indicates error
    }
    string line;
    while (!inputFileStream.eof()) {
        getline(inputFileStream, line);
        cout << line << endl;
    }

    inputFileStream.close();


    inputFileStream.open("sales.txt");

    double total = 0;

    double number = 0;
    while (!inputFileStream.fail()) {
       // number = 0;
        total += number;
        inputFileStream >> number;
        
    }

    cout << "Total sales are: $" << total << endl;


    return 0;
}
