#include "Sin.h"

double Sin::GetSinWithEpsilon(double x, double a, int k, double eps)
{
	if (abs(a) >= eps)
	{
		return a + GetSinWithEpsilon(x, a * (-pow(x, 2) / (2 * k + 3) / (2 * k + 2)), k++, eps);
	}

	return a;
}

double Sin::GetSinWithEpsilon(double x, double eps)
{
	return GetSinWithEpsilon(x, x, 0, eps);
}
