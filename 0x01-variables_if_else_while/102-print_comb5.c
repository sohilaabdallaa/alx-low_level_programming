#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description: prints all possible combination of 2-digit numbers
 * Return: Always 0 (success)
 */
int main(void)
{
	int a, i, b, j;

	for (a = 48; a <= 57; a++)
	{
		for (i = 48; i <= 57; i++)
		{
			for (b = 48; b <= 57; b++)
			{
				for (j = 48; j <= 57; j++)
				{
				if (((b + j) > (a + i) &&  b >= a) || a < b)
				{
					putchar(a);
					putchar(i);
					putchar(' ');
					putchar(b);
					putchar(j);

					if (a + i + b + j == 227 && a == 57)
					{
					break;
					}
					else
					{
					putchar(',');
					putchar(' ');
					}
				}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
