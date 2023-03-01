#include "main.h"
/**
 * _strncat- concatnate two strings
 * @dest: pointer to destination arr of chars
 * @src: pointer to source arr of chars
 * @n: number of bytes
 * Return: pointer to dest
*/
char *_strncat(char *dest, char *src, int n)
{
int i = 0;
int j = 0;
int s = 0;

while (dest[i] != '\0')
{
i++;
}
while (src[s] != '\0')
{
s++;
}
if (n > s)
{
n = s;
}
for (j = 0; j < n; j++)
{
if (src[j] != '\0')
{
dest[i++] = src[j];
}
}
dest[i] = '\0';
return (dest);
}
