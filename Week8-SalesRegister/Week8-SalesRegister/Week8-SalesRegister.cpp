#include <fstream>
#include <iostream>

using namespace std;

int main()
{
	string fileName;
	cout << "Enter the name of the file to read/write" << endl;
	cin >> fileName;

	string item1Name;
	double item1Price;
	int item1Quantity;

	string item2Name;
	double item2Price;
	int item2Quantity;

	string item3Name;
	double item3Price;
	int item3Quantity;

	ifstream inputFileSteam;

	inputFileSteam.open(fileName);

	if (inputFileSteam.is_open()) {
		inputFileSteam >> item1Name;
		inputFileSteam >> item1Price;
		inputFileSteam >> item1Quantity;

		inputFileSteam >> item2Name;
		inputFileSteam >> item2Price;
		inputFileSteam >> item2Quantity;

		inputFileSteam >> item3Name;
		inputFileSteam >> item3Price;
		inputFileSteam >> item3Quantity;


		inputFileSteam.close();
	}
	else
	{
		cout << "Unable to open file, please enter manually, item name, item price, item quantity 3 times" << endl;
		cin >> item1Name;
		cin >> item1Price;
		cin >> item1Quantity;

		cin >> item2Name;
		cin >> item2Price;
		cin >> item2Quantity;

		cin >> item3Name;
		cin >> item3Price;
		cin >> item3Quantity;
	}

	cout << "What do you want to buy?" << endl;
	cout << item1Name << ", " << item2Name << ", " << item3Name << endl;

	string choice;

	cin >> choice;

	if (choice != item1Name && choice != item2Name && choice != item3Name) {
		cout << "We don't sell that!" << endl;
		cout << "What do you want to buy?" << endl;
		cout << item1Name << ", " << item2Name << ", " << item3Name << endl; cin >> choice;
	}

	int itemQuantity;
	double itemPrice;


	if (choice == item1Name) {
		itemQuantity = item1Quantity;
		itemPrice = item1Price;
	}
	else if (choice == item2Name)
	{
		itemQuantity = item2Quantity;
		itemPrice = item2Price;
	}
	else {
		itemQuantity = item3Quantity;
		itemPrice = item3Price;
	}
	int quantity;
	cout << "How many do you want to buy?" << endl;
	cin >> quantity;

	while (quantity > itemQuantity) {
		cout << "We only have " << itemQuantity << endl;
		cout << "How many do you want to buy?" << endl;
		cin >> quantity;
	}

	cout << "Your total cost is: $" << quantity * itemPrice;

	if (choice == item1Name) {
		item1Quantity -= quantity;

	}
	else if (choice == item2Name)
	{
		item2Quantity -= quantity;

	}
	else {
		item3Quantity -= quantity;
	}

	ofstream outputFileStream;

	// delete the contents of the file
	outputFileStream.open(fileName);

	outputFileStream << item1Name << endl;
	outputFileStream << item1Price << endl;
	outputFileStream << item1Quantity << endl;

	outputFileStream << item2Name << endl;
	outputFileStream << item2Price << endl;
	outputFileStream << item2Quantity << endl;

	outputFileStream << item3Name << endl;
	outputFileStream << item3Price << endl;
	outputFileStream << item3Quantity << endl;

	outputFileStream.close();

}
