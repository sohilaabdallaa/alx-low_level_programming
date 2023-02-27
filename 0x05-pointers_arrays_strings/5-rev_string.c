#include "main.h"
/**
 * rev_string - reverse given string
 * @s: pointer to char
 * Return: void.
 */
void rev_string(char *s)
{
int length = 0;
int c;
char *begin, *end, temp;
while (s[length] != '\0')
length++;
begin = s;
end = s;
for (c = 0; c < (length - 1); c++)
{
end++;
}
for (c = 0; c < length / 2; c++)
{
temp = *end;
*end = *begin;
*begin = temp;
begin++;
end--;
}
}
