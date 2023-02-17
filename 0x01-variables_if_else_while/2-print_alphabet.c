#include <stdio.h>
/**
 * main - print alpha char
 * Descripton: use putchar func
 * Return: 0
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	putchar('\n');
return (0);
}
