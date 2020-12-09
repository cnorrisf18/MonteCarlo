#include <iostream>
using namespace std;



double Function(double x, int FunctionChosen)
{
	double FunctionSolution = 0;
	switch (FunctionChosen) {
	case 1: //f(x) = x
		FunctionSolution = x;
		break;
	case 2: //f(x) = x^2
		FunctionSolution = pow(x, 2);
		break;
	case 3: //f(x) = sin(x)
		FunctionSolution = sin(x);
		break;
	case 4: //f(x) = cos(x)
		FunctionSolution = cos(x);
		break;
	case 5: //f(x) = exp(x)
		FunctionSolution = exp(x);
		break;
	default:
		cout << "Invalid option";
		return 0;
	}
	return FunctionSolution;
}
double CalculateIntegralMC(int SmallNumberOfSimulations,int LargeNumberOfSimulations, int FunctionChosen)
{
	for (int iSimulationBatch = 0; iSimulationBatch < 20; iSimulationBatch++)
	{
		double SumOfValues = 0;
		int NumberOfSimulations = SmallNumberOfSimulations + iSimulationBatch * (LargeNumberOfSimulations - SmallNumberOfSimulations) / 20;
		for (int i = 0; i < NumberOfSimulations - 1; i++)
		{
			double x = double(rand()) / RAND_MAX;
			double FofX = Function(x, FunctionChosen);
			SumOfValues += FofX;
		}
		double MonteCarlo = SumOfValues / NumberOfSimulations;
		cout << "Monte Carlo estimation for " << NumberOfSimulations << " simulations is " << MonteCarlo << endl;

	}
	return 0;
}


double CalculateIntegralExact(int FunctionChosen)
{
	double CalculatedIntegral = 0;
	switch (FunctionChosen) {
	case 1: //function = x, integral = 1/2
		CalculatedIntegral = .5;
		break;
	case 2: //function = x^2, integral = 1/3
		CalculatedIntegral = double(1)/double(3);
		break;
	case 3: //f(x) = sin(x)
		CalculatedIntegral = -cos(1) + cos(0);
		break;
	case 4: //f(x) = cos(x)
		CalculatedIntegral = sin(1)-sin(0);
		break;
	case 5: //f(x) = exp(x)
		CalculatedIntegral = exp(1)-1;
		break;
	default:
		cout << "Invalid option";
		return 0;
	}
	return CalculatedIntegral;
}