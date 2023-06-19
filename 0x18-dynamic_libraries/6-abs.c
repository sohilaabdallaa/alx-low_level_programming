#include "main.h"

/**
 * _abs - Entry point
 * @n: n is an integer
 * Description: prints the absolute value of given int
 * Return: int as result
 */

int _abs(int v)
{
	return v * ((v>0) - (v<0));
}
