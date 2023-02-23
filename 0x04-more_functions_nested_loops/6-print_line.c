#include "main.h"
/**
 * print_line - Entry point of program
 * Description: Draw line by display -
 * @n: integer varible num of - (line length)
 * Return: void
 */

void print_line(int n)
{
if (n > 0)
{
while (n >= 0)
{_putchar ('_');
n--;
}
}
_putchar ('\n');
}

