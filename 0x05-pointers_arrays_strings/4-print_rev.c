#include "main.h"
/**
 * print_rev - print string reversed
 * @s: pointer to char
 * Return: void.
 */
void print_rev(char *s)
{
int i = 0;
int j;

while (*s != '\0')
{
i++;
s++;
}
for (j = 0; j <= i; j++)
{
_putchar (*s);
s--;
}
_putchar ('\n');
}

