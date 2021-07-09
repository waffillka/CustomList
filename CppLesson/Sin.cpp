#include "Sin.h"

double Sin::GetSinWithEpsilon(double x, double a, int k, double eps)
{
	if (abs(a) > eps)
	{
		return a + GetSinWithEpsilon(x, a * (-pow(x, 2) / (2 * k + 3) / (2 * k + 2)), k + 1, eps);
	}

	return a;
}

double Sin::_getSinI(double x, int k)
{
	return pow(-1, k % 2) * pow(x, 2 * k + 1) / factorial(2 * k + 1);
}

double Sin::GetSinWithEpsilon(double x, double eps)
{
	return GetSinWithEpsilon(x, x, 0, eps);
}

double Sin::GetSinWithEpsilonV2(double x, double eps)
{
	double value = 0;
	int index = 0;
	double result = 0;

	do {
		value = _getSinI(x, index);
		result += value;
		index++;

	} while (abs(value) > eps);

	return result;
}

int Sin::factorial(int n)
{
	if (n == 0 || n == 1)
	{
		return 1;
	}

	return n * factorial(n - 1);
}

int Sin::factorial(int curRes, int n)
{
	if (n)
	{
		return factorial(curRes * n, n - 1);
	}

	return curRes;
}
