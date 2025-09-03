
#include <iostream> 
#include <iomanip>
#include <cmath>

using namespace std; 

int main() 
{ 
	char letter = 'E';

	cout << letter + 5 << endl;
	string name = "Eric";

	// adding above the integer max gives garbage
	int number = 2147483647;
	int anotherNumber = 10;

	// this is garbage
	int result = number + anotherNumber;

	cout << result << endl;

	int firstNumber = 2;
	int secondNumber = 7;

	// integer division, gives integer result
	cout << "The result of " << secondNumber << " divided by "
		<< firstNumber << " is: " << secondNumber / firstNumber 
		<< endl;

	int pretendNumberWithADecimal = 4.2;

	cout << pretendNumberWithADecimal << endl;

	double actualNumberWithADecimal = 4.2;

	cout << actualNumberWithADecimal << endl;

	cout << "size of float: " << sizeof(float) << endl;
	cout << "size of double: " << sizeof(double) << endl;

	cout << actualNumberWithADecimal * 1.1 << endl;

	cout << actualNumberWithADecimal / 2 << endl;

	cout << actualNumberWithADecimal + 2 << endl;

	cout << actualNumberWithADecimal * 3 / 2 + 7.0 / 2 << endl;


	// copilot bing answer "c++ example of bad adding floating point numbers"
	float a = 0.1f;  // Single-precision floating-point
	float b = 0.2f;  // Single-precision floating-point
	float sum = a + b;

	// Display results with high precision
	std::cout << std::fixed << std::setprecision(10);
	std::cout << "a = " << a << "\n";
	std::cout << "b = " << b << "\n";
	std::cout << "a + b = " << sum << "\n";

	// modulus - the integer remainder of division
	int remainder = 7 % 2;

	number = 7;

	cout << "Enter your first number: ";
	cin >> firstNumber;

	cout << "Enter your second number: ";
	cin >> secondNumber;

	cout << firstNumber << " + " << secondNumber << " = "
		<< firstNumber + secondNumber << endl;

	cout << firstNumber << " - " << secondNumber << " = "
		<< firstNumber - secondNumber << endl;

	cout << firstNumber << " * " << secondNumber << " = "
		<< firstNumber * secondNumber << endl;

	cout << firstNumber << " / " << secondNumber << " = "
		<< firstNumber / secondNumber << endl;

	double wage;
	cout << "Enter your hourly wage: ";
	cin >> wage;

	double hoursPerWeek;
	cout << "Enter your average hours worked in a week: ";
	cin >> hoursPerWeek;

	const int WEEKS_WORKED_PER_YEAR = 50;

	double yearlySalary = wage * hoursPerWeek * WEEKS_WORKED_PER_YEAR;

	const double TAX = .15;

	double yearlySalaryAfterTax = yearlySalary * (1 - TAX);

	cout << "Your annual salary is: $" << yearlySalary << endl;
	cout << "Your salary after taxes is $" << yearlySalaryAfterTax << endl;

	int monthlyRent;
	cout << "Enter your monthly rent: ";
	cin >> monthlyRent;

	cout << "After paying rent, you have $" << 
		yearlySalaryAfterTax - (monthlyRent * 12) << endl;

	int carPayment;
	int carInsurance;
	int phoneBill;
	int healthInsurance;
	int gymMembership;
	int utilities;

	cout << "Enter your monthly car payment: ";
	cin >> carPayment;

	cout << "Enter your monthly car insurance: ";
	cin >> carInsurance;

	cout << "Enter your monthly phone bill: ";
	cin >> phoneBill;

	cout << "Enter your monthly health insurance: ";
	cin >> healthInsurance;

	cout << "Enter your monthly gym membership: ";
	cin >> gymMembership;

	cout << "Enter your monthly utilities: ";
	cin >> utilities;

	int yearlyOtherStuff = (carPayment + carInsurance + phoneBill
		+ healthInsurance + gymMembership + 
		utilities + monthlyRent) * 12;

	cout << "After paying all your bills, not including food $" <<
		yearlySalaryAfterTax - yearlyOtherStuff;


	return 0;
}
