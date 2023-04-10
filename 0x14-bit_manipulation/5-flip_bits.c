#include "main.h"
/**
 *flip_bits - count number of bits to flip to get from number to another.
 *@n: first number.
 *@m: sec number.
 *Return:number of flipped bits.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i = n ^ m;
	unsigned int counter = 0;

	while (i > 0)
	{
		counter++;
		i &= (i - 1);
	}
	return (counter);
}
