#pragma once
#include<math.h>
#include<cmath>

class Sin
{
	double GetSinWithEpsilon(double x, double a, int k, double eps);
	double _getSinI(double x, int k);
public:
	double GetSinWithEpsilon(double x, double eps = 0.0001);
	double GetSinWithEpsilonV2(double x, double eps = 0.0001);
	int factorial(int n);
	int factorial(int curRes, int n);
};

