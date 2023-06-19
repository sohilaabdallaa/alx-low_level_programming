#include "main.h"
/**
 * _islower - Entry point
 * Description : check if char is lower case or not
 * @c : integer value it recevies
 * Return: 1 if true. 0 (otherwise).
 */
int _islower(int c)
{
int i = 'a';

for (i = 'a'; i <= 'z'; i++)
{
/* refer int c*/
if (c == i)
{
return (1);
}
}
return (0);
}
