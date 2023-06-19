#include "main.h"
/**
 * _strlen - count length of string
 * @s: pointer to char
 * Return: integer value which is the length.
 */
int _strlen(char *s)
{
int i = 0;
while (*s != '\0')
{
i++;
s++;
}
return (i);
}

