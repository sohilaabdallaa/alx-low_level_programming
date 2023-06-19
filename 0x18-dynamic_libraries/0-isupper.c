#include "main.h"
/**
 * _isupper - Entry point of program
 * Description: Check whether char is uppercase of not
 * @c: carrier integer variable
 * Return: 1 if true c is uppercase. 0 (otherwise)
 */
int _isupper(int c)
{
int i;

for (i = 'A'; i <= 'Z'; i++)
{
if (c == i)
{
return (1);
}
}
return (0);
}
