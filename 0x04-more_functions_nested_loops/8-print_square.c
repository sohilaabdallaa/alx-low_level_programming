#include "main.h"
/**
 *  print_square - print squares with hashtags
 * @size: integer variable
 * Return: void
*/
void print_square(int size)
{
int i, j;
for (i = 0; i < size; i++)
{
if (size == 0 || size < 0)
{
_putchar ('\n');
break;
}
for (j = 0; j < size; j++)
{_putchar ('#');
}
_putchar ('\n');
}
}
