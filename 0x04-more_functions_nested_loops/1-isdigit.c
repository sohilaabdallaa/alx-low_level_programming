#include "main.h"
/**
 * _isdigit - Entry point
 * Description: check whether argument is digit from 0 to 9 or not
 * @c: integer variable
 * Return: 1 if true. 0 otherwise.
*/
int _isdigit(int c)
{int i;

for (i = '0'; i <= '9'; i++)
{
if (c == i)
return (1);
}
return (0);
}
