
#include <iostream>

#include <vector>
#include <random>
#include <ctime>

using namespace std;

class Vehicle {
private:
	string make;
	string model;
	string color;
public:
	Vehicle(string make, string model, string color) {
		this->make = make;
		this->model = model;
		this->color = color;
	}

	string getMake() {
		return make;
	}

	string getModel() {
		return model;
	}

	string getColor() {
		return color;
	}

	void setColor(string color) {
		this->color = color;
	}
};

class LottoTicket {
private:
	int number1;
	int number2;
	int number3;

public:
	// constructors don't have return types

	// hope we get valid numbers, we don't know how exceptions work yet
	LottoTicket(int number1, int number2, int number3) {
		this->number1 = number1;
		this->number2 = number2;
		this->number3 = number3;
	}

	int getNumber1() {
		return number1;
	}
	int getNumber2() {
		return number2;
	}
	int getNumber3() {
		return number3;
	}

	bool isWinner(LottoTicket winningTicket) {
		return number1 == winningTicket.number1
			&& number2 == winningTicket.number2
			&& number3 == winningTicket.number3;
	}

};

class Chair {
private:
	string color;
	int heightInCentimeters;
	int minimumHeightInCentimeters;
	int maximumHeightInCentimters;
	int numberOfWheels;
	bool hasArms;
public:
	string getColor() {
		return color;
	}

	void setColor(string color) {
		this->color = color;
	}

	// umgpt given this class, write set and get functions

	//class Chair {
	//private:
	//	string color;
	//	int heightInCentimeters;
	//	int minimumHeightInCentimeters;
	//	int maximumHeightInCentimters;
	//	int numberOfWheels;
	//	bool hasArms;

	
	int getHeightInCentimeters() { 
		return heightInCentimeters; 
	}

	void setHeightInCentimeters(int heightInCentimeters) {
		if (heightInCentimeters >= minimumHeightInCentimeters
			&& heightInCentimeters <= maximumHeightInCentimters) {
			this->heightInCentimeters = heightInCentimeters;
		}
	}


	int getMinimumHeightInCentimeters() { 
		return minimumHeightInCentimeters; 
	}
	void setMinimumHeightInCentimeters(int minH) { 
		minimumHeightInCentimeters = minH; 
	}

	int getMaximumHeightInCentimters()  { 
		return maximumHeightInCentimters; 
	}
	void setMaximumHeightInCentimters(int maxH) { 
		maximumHeightInCentimters = maxH;
	}

	int getNumberOfWheels() {
		return numberOfWheels;
	}
	void setNumberOfWheels(int n) { 
		numberOfWheels = n; 
	}

	// Getter and setter for hasArms
	bool getHasArms() {
		return hasArms;
	}
	void setHasArms(bool arms) { 
		hasArms = arms; 
	}


};

void printChair(Chair chair) {
	cout << "Color: " << chair.getColor() << endl;
	cout << "Height in CM: " << chair.getHeightInCentimeters() << endl;
	cout << "Number of wheels: " << chair.getNumberOfWheels() << endl;
}

int main()
{

	LottoTicket winningTicket(5, 7, 1);

	

	srand(time(0));

	int number1 = rand() % 10;
	int number2 = rand() % 10;
	int number3 = rand() % 10;

	LottoTicket ticket(number1, number2, number3);
	int numberOfTickets = 1;
	while (!ticket.isWinner(winningTicket)) {
		int number1 = rand() % 10;
		int number2 = rand() % 10;
		int number3 = rand() % 10;

		ticket = LottoTicket(number1, number2, number3);

		numberOfTickets++;
	}

	cout << "It took " << numberOfTickets << " to win!" << endl;


	Chair ericsChair;
	ericsChair.setHeightInCentimeters(30);
	ericsChair.setColor("grey and blue");
	ericsChair.setMaximumHeightInCentimters(30);
	ericsChair.setMinimumHeightInCentimeters(30);
	ericsChair.setHasArms(false);
	ericsChair.setNumberOfWheels(4);

	Chair bobsChair;
	bobsChair.setHeightInCentimeters(40);
	bobsChair.setMaximumHeightInCentimters(50);
	bobsChair.setMinimumHeightInCentimeters(30);
	bobsChair.setColor("black");
	bobsChair.setHasArms(true);
	bobsChair.setNumberOfWheels(5);

	printChair(ericsChair);
	printChair(bobsChair);

   cout << "Hello World!\n";
}
