#include "main.h"
/**
 * void function
 * Description : prints the alphabet, in lowercase, followed by a new line.
 * Return : 0 succes
*/
void print_alphabet(void)
{
char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
