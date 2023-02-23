#include "main.h"
/**
 * more_numbers - Entry point of program
 * Description: Display nymbers from 0 to 14 , Five times
 * Return: void
 */
void more_numbers(void)
{
int i;
char j, c;

for (i = 0; i < 10; i++) 
{
for (j = 0; j <= 14; j++)
{c = j;
if (j > 9)
{
c = j % 10; 
_putchar ('1');
}
_putchar ('0' + c);
}
_putchar ('\n');
}
}
