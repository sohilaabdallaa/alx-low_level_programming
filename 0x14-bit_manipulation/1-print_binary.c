#include "main.h"
/**
 * print_binary - Convert integer to Binary.
 * @n: integer number to be converted.
 * Return:void just print binart digits.
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);
	}
	/*
	 * 0 for print char
	 * & for acces (LSB) which is the reminder
	 */
	_putchar('0' + (n & 1));
}
