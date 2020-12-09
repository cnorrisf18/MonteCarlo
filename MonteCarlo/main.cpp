#include <iostream>
#include "Maths.h"
#include "Menus.h"
using namespace std;

int main()
{
	int FunctionChosen = PrintMenuAndGetOption();
	//cout << "The function chosen was option " << FunctionChosen << endl;
	if (FunctionChosen == 6) //exit the program
	{
		cout << "You chose to exit the program";
		return 0;
	}
	int SmallNumberOfSimulations = 0, LargeNumberOfSimulations = 0;
	cout << "Please input the smaller number of simulations: ";
	cin >> SmallNumberOfSimulations;
	cout << "Please input the larger number of simulations: ";
	cin >> LargeNumberOfSimulations;

	//add error message here if number of simulations is incorrect

	//cout << "The number of requested simulations is " << SimulationsRequested << endl;
	double MonteCarloEstimation = CalculateIntegralMC(SmallNumberOfSimulations, LargeNumberOfSimulations, FunctionChosen);
	double ExactIntegration = CalculateIntegralExact(FunctionChosen);
	//cout << "Monte Carlo estimation of the integral is " << MonteCarloEstimation << endl;
	cout << "The exact integral of the function between 0 and 1 is " << ExactIntegration << endl;
	cout << "Have a nice day!";
	return 0;
}