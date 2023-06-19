#include "main.h"
/**
 * _strcat- concatnate two strings
 * @dest: pointer to destination arr of chars
 * @src: pointer to source arr of chars
 * Return: pointer to dest
*/
char *_strcat(char *dest, char *src)
{
int i = 0;
int j = 0;

while (dest[i] != '\0')
{
i++;
}
while (src[j] != '\0')
{
dest[i++] = src[j];
j++;
}
dest[i] = '\0';
return (dest);
}
