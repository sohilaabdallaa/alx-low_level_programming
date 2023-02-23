#include "main.h"
/**
 * print_most_numbers - Entry point of program
 * Description: Display nymbers from 0 to 9 without 2 and 4
 * Return: void
 */
void print_most_numbers(void)
{
int i;
for (i = '0'; i <= '9'; i++)
{
if (i == '2' || i == '4')
{continue;
}
_putchar (i);
}
_putchar ('\n');
}
