#include <iostream>
using namespace std;

int PrintMenuAndGetOption()
{
	int OptionChosen = 0;
	cout << "1. f(x) = x" << endl
		<< "2. f(x) = x^2" << endl
		<< "3. f(x) = sin(x)" << endl
		<< "4. f(x) = cos(x)" << endl
		<< "5. f(x) = exp(x)" << endl
		<< "6. Exit" << endl;
	cout << "Please input the number of your selected function to integrate. ";
	bool done = false;
	while (done == false) {
		cin >> OptionChosen;
		if (OptionChosen < 1 || OptionChosen > 6) {
			cout << "Incorrect selection, please try again" << endl;
			continue;
		}
		else {
			done = true;
		}
	}
	return OptionChosen;
}

int RequestSimulations()
{
	int SimulationNumber = 0;
	cout << "How many simulations do you wish to use? ";

	bool done = false;
	while (done == false) {
		cin >> SimulationNumber;
		if (SimulationNumber < 0)
		{
			cout << "Please input a non-negative number." << endl;
		}
		else {
			done = true;
		}
	}
	return SimulationNumber;
}

