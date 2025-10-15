#include <iostream>
#include <fstream>
#include <vector>
#include <string>



using namespace std;

int main()
{
    ofstream outputFileStream;

    outputFileStream.open("list.txt");

    outputFileStream << "Kroger|milk|lettuce|eggs" << endl;

    outputFileStream.close();


    ifstream inputFileStream;
    inputFileStream.open("list.txt");

    string storeName;
    string item1;
    string item2;
    string item3;

    string line;
    inputFileStream >> line;

    inputFileStream.close();

    // bing ai "c++ find character in string"
    char target = '|';
    size_t index = line.find(target);
    storeName = line.substr(0, index);
    
    size_t nextIndex = line.find(target, index+1);
    item1 = line.substr(index + 1, nextIndex-index-1);
    
    index = nextIndex;
    nextIndex = line.find(target, index + 1);
    item2 = line.substr(index + 1, nextIndex-index-1);

    index = nextIndex;
    item3 = line.substr(index + 1);

    cout << "Your list from " << storeName << endl;
    cout << item1 << ", " << item2 << ", " << item3 << endl;

    // append mode so the file isn't erased
    outputFileStream.open("list.txt", ios_base::app);

    outputFileStream << "Gamestop|battlefield|gta|ghost of yotei" << endl;

    outputFileStream.close();

    inputFileStream.open("list.txt");

    vector<string> items;

    getline(inputFileStream, line); // throw away kroger line
    getline(inputFileStream, line);

    index = line.find(target);
    storeName = line.substr(0, index);

    nextIndex = line.find(target, index+1);
    while (nextIndex != string::npos) {
        items.push_back(line.substr(index + 1, nextIndex - index - 1));
        index = nextIndex;
        nextIndex = line.find(target, index + 1);
    }
    items.push_back(line.substr(index+1));


    cout << "List for " << storeName << endl;
    for (string item : items) {
        cout << item << ",";
    }
    cout << endl;


    inputFileStream.close();

}
