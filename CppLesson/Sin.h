#pragma once
#include<math.h>
#include<cmath>

class Sin
{
	double GetSinWithEpsilon(double x, double a, int k, double eps);
public:
	double GetSinWithEpsilon(double x, double eps = 0.0001);
};

