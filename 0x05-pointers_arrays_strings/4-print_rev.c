#include "main.h"
/**
 * print_rev - print string reversed
 * @s: pointer to char
 * Return: void.
 */
void print_rev(char *s)
{
int size = 16;
int i = 0;
char *ss;
ss = s;
while (*ss != '\0')
{
i++;
ss++;
}
ss = s;
ss = s+ size;
while (*ss != *s)
{
_putchar (*ss);
ss--;
}
}

