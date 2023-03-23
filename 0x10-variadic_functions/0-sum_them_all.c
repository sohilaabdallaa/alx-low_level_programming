#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - add all given integer numbers.
 * @n : number of integers passed.
 * @...: A variable number of paramters to calculate the sum of.
 * Return: 0 if (n==0) otherwise integer result of the addition of numbers.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0;
	int sum = 0;
	va_list pt;

	va_start(pt, n);
	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(pt, int);
	}
	va_end(pt);
	return (sum);
}
