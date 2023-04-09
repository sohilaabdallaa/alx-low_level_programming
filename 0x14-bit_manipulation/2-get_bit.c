#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index.
 * @n:integer number.
 * @index:index, starting from 0 of the bit you want to get.
 * Return:the value of the bit at index index or -1 if an error occured.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	if (n == 0)
		return (0);
	/*
	 * This is done to shift the bit at the specified index to (LSB) position,
	 * so that it can be extracted using a bitwise AND operation with the value 1.
	 */
	n = n >> index;
	if ((n & 1) != 0)
		return (1);
	return (0);

}
