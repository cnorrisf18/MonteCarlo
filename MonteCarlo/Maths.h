#pragma once
double CalculateIntegralMC(int SmallNumberOfSimulations, int LargeNumberOfSimulations, int FunctionChosen);
double Function(double x, int FunctionChosen);
double CalculateIntegralExact(int FunctionChosen);